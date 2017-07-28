/*
 * test.cpp
 *
 *  Created on: 2017. 7. 27.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
#include<queue>
using namespace std;

#define MAX 100001

int N, M;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int Board[101][101];
int Dp[101][101];
int visit[101][101];

void bfs(int sx, int sy){

	queue<pair<int, int > > q;
	q.push(make_pair(sx,sy));

	Dp[sx][sy] = 0;

	while(!q.empty()){

		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for(int i=0; i<4; i++){

			int nx = x+dx[i];
			int ny = y+dy[i];

			if(1<=nx && 1<=ny && nx<=N && ny <=M){
				if(Board[nx][ny] == 0 && Dp[x][y] < Dp[nx][ny]){
					Dp[nx][ny] = Dp[x][y];
					q.push(make_pair(nx,ny));
				}
				else if(Board[nx][ny] == 1 && Dp[x][y] +1 < Dp[nx][ny]){
					Dp[nx][ny] = Dp[x][y]+1;
					q.push(make_pair(nx,ny));
				}
			}

		}



	}




}

int main(){

	cin >> M >> N;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			char c;
			cin >> c;
			Board[i][j] = c-'0';
			Dp[i][j] = MAX;
			visit[i][j] = 0;
		}
	}

	bfs(1,1);

	cout<<Dp[N][M]<<endl;


}


