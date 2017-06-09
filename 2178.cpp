/*
 * 2178.cpp
 *
 *  Created on: 2017. 6. 9.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>

using namespace std;

int road[102][102];

int ans;
int N, M;

const int addX[4] = {1, 0, -1, 0};
const int addY[4] = {0, 1, 0, -1};

queue<int> x;
queue<int> y;
queue<int> l;

void init(){

	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			char c;
			cin >> c;
			road[i][j] = c - '0';
		}
	}
	ans = N*M;
}

void enqueue(int _x, int _y, int _l){
	x.push(_x);
	y.push(_y);
	l.push(_l);
}

void dequeue(){
	x.pop();
	y.pop();
	l.pop();
}

void bfs(int i, int j){

	enqueue(i, j, 1);

	while(!x.empty()){

		road[i][j] = 0;

		if(x.front() == N && y.front() == M){
			ans = l.front();
			return;
		}

		for(int k=0; k<4; k++){
			int newI = x.front()+ addX[k];
			int newJ = y.front()+addY[k];
			if(1 <= newI && newI <= N && 1<=newJ && newJ<=M && road[newI][newJ] == 1){
				enqueue(newI, newJ, l.front()+1);
				road[newI][newJ] = 0;
			}
		}

		dequeue();

	}

}
/*
void dfs(int i, int j, int count){

	if(i == N && j == M ){
		if(count < ans) ans = count;
		return;
	}
	if(count > ans) return;

	road[i][j] = 0;

	for(int k=0; k<4; k++){
		int newI = i+addX[k];
		int newJ = j+addY[k];
		if(1 <= newI && newI <= N && 1<=newJ && newJ<=M && road[newI][newJ] == 1){
			dfs(i+addX[k], j+addY[k], count+1);
		}
	}

	road[i][j] = 1;
}
*/

int main(){

	cin >> N >> M;

	init();

	bfs(1,1);

	cout<<ans<<endl;

	return 0;
}


