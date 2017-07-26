/*
 * 14502.cpp
 *
 *  Created on: 2017. 7. 26.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int N, M;
int visit[9][9];
int Map[9][9];
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

struct Point{
	int x;
	int y;
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
};
//0 빈칸 , 1벽, 2바이러스.


//바이러스의 퍼져나감.
int bfs(int x, int y){

	int cnt = 1;
	queue<Point> q;
	q.push(Point(x,y));
	visit[x][y] = 1;

	while(!q.empty()){

		Point n = q.front();
		q.pop();

		for(int i=0; i<4; i++){

			int nx = dx[i]+n.x;
			int ny = dy[i]+n.y;
			if(0<=nx && 0<=ny && nx<N && ny < M){
				if(visit[nx][ny] == 0 && Map[nx][ny]==0){
					visit[nx][ny] = 1;
					q.push(Point(nx,ny));
					cnt++;
				}
			}
		}
	}
	return cnt;
}

int main(){

	cin >> N >> M;

	int ans = N*M;
	int one = 0;
	vector<Point> v;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin >> Map[i][j];
			if(Map[i][j] == 0){
				v.push_back(Point(i,j));
			}
			if(Map[i][j] == 1){
				one++;//벽이1인값.
			}
		}
	}
//1벽.
	one = one + 3;

	for(int a=0; a<v.size()-2; a++){
		for(int b=a+1; b<v.size()-1; b++){
			for(int c=b+1; c<v.size(); c++){

				//벽을 쌓음.
				Map[v[a].x][v[a].y] = 1;
				Map[v[b].x][v[b].y] = 1;
				Map[v[c].x][v[c].y] = 1;

				for(int i=0; i<N; i++){
					for(int j=0; j<M; j++){
						visit[i][j] = 0;
					}
				}
				int sum = 0;

				for(int i=0; i<N; i++){
					for(int j=0; j<M; j++){

						if(visit[i][j] == 0 && Map[i][j] == 2){
							sum +=bfs(i,j);
						}
					}
				}
				//바이러스와벽의 갯수.
				sum = sum + one;
				if(ans > sum) ans = sum;

				//벽해제.
				Map[v[a].x][v[a].y] = 0;
				Map[v[b].x][v[b].y] = 0;
				Map[v[c].x][v[c].y] = 0;

			}
		}
	}

	cout<<N*M-ans<<endl;

	return 0;
}


