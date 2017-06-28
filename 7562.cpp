/*
 * 7562.cpp
 *
 *  Created on: 2017. 6. 28.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

const int ax[8] = {-2,-2,-1,-1,1,1,2,2};
const int ay[8] = {1,-1,2,-2,2,-2,1,-1};
bool board[301][301];
int N;

struct Point{
	int x;
	int y;
	int cnt;
	Point(int x,int y, int cnt){
		this->x = x;
		this->y =y;
		this->cnt = cnt;
	}
};

int bfs(int sx, int sy, int ex, int ey){

	queue<Point> q;
	memset(board, 0, sizeof(board));

	q.push(Point(sx, sy, 0));

	board[sx][sy] = true;

	while(!q.empty()){

		Point now = q.front();
		q.pop();

		for(int i=0; i<8; i++){

			int newX = now.x + ax[i];
			int newY = now.y + ay[i];
			int newC = now.cnt + 1;
			if(0<=newX && newX<N && 0<=newY && newY<N && board[newX][newY] == false){
				if(newX == ex && newY == ey) return newC;
				q.push(Point(newX, newY, newC));
				board[newX][newY] = true;
			}

		}

	}
	return -1;
}


int main(){

	int T;
	cin >> T;

	while(T--){

		int sx, sy, ex, ey;
		cin >> N >> sx >> sy >> ex >> ey;

		cout<<bfs(sx,sy,ex,ey)<<endl;
	}

	return 0;
}


