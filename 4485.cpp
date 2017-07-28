/*
 * 4485.cpp
 *
 *  Created on: 2017. 7. 28.
 *      Author: chokisang
 */

#include<iostream>
#include<climits>
#include<queue>
using namespace std;

struct Node{
	int x;
	int y;
	int cnt;

	Node(int x, int y, int cnt){
		this->x = x;
		this->y = y;
		this->cnt = cnt;
	}
};

int Map[126][126];
int dist[126][126];
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int N;


void bfs(){

	queue<Node> q;
	q.push(Node(0,0,dist[0][0]));

	while(!q.empty()){

		int x = q.front().x;
		int y = q.front().y;
		int cnt = q.front().cnt;

		q.pop();

		for(int i=0; i<4; i++){

			int nx = x + dx[i];
			int ny = y + dy[i];
			int ncnt = cnt + Map[nx][ny];

			if(0<=nx && nx < N && 0<=ny && ny < N){

				if(dist[nx][ny] > ncnt){
					dist[nx][ny] = ncnt;
					q.push(Node(nx,ny, ncnt));
				}
			}

		}

	}

}


int main(){

	int Number = 0;
	while(1){

		Number++;
		cin >> N;

		if(N == 0) return 0;

		//입력.
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> Map[i][j];
				dist[i][j] = INT_MAX;
			}
		}
		dist[0][0] = Map[0][0];

		bfs();

		cout<<"Problem "<<Number<<": "<<dist[N-1][N-1]<<endl;

	}

}


