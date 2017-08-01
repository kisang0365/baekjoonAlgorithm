/*
 * 2146.cpp
 *
 *  Created on: 2017. 7. 31.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>
using namespace std;

int N;
int Board[101][101];
int Sum[101][101];
int visit[101][101];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

struct Node{
	int x;
	int y;
	int n;
	int number;
	Node(int x, int y, int n, int number){
		this->x =x;
		this->y = y;
		this-> n = n;
		this->number=  number;
	}
};

queue<Node> q;

void makeSum(int x, int y, int cnt){

	Sum[x][y] = cnt;
	q.push(Node(x,y,0, cnt));

	for(int i=0; i<4; i++){

		int nx = x + dx[i];
		int ny = y + dy[i];

		if(0<=nx && nx < N && 0<=ny && ny <N){
			if(Board[nx][ny] == 1 && Sum[nx][ny] == 0){
				makeSum(nx, ny, cnt);
			}
		}
	}
	return;
}

int bfs(){

	int Min = 100001;
	while(!q.empty()){

		Node curent = q.front();
		q.pop();

		for(int i=0; i<4; i++){

			int nx = curent.x + dx[i];
			int ny = curent.y + dy[i];
			int ncnt = curent.n + 1;
			int number = curent.number;

			if(0<=nx && nx < N && 0<=ny && ny <N){

				if(Sum[nx][ny] == 0){
					visit[nx][ny] = ncnt;
					Sum[nx][ny] = number;
					q.push(Node(nx,ny,ncnt, number));
				}
				else{
					if(Sum[nx][ny] != number)
						if(Min > curent.n+visit[nx][ny]) Min = curent.n + visit[nx][ny];
				}


//				if(Board[nx][ny] == 1 && number != Sum[nx][ny]){
//					return curent.n;
//				}
//
//				if(visit[nx][ny] == false){
//					//visit[nx][ny] = true;
//					q.push(Node(nx,ny, ncnt, number));
//				}
			}
		}
	}
	if(Min > 10000) Min = 0;
	return Min;
}

int main(){
	cin >> N;

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> Board[i][j];
			visit[i][j] = false;
			Sum[i][j] = 0;
		}
	}

	int cnt=1;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(Board[i][j] == 1 && Sum[i][j] == 0){
				makeSum(i,j,cnt++);
			}
		}
	}

	cout<<bfs()<<endl;


	return 0;

}


