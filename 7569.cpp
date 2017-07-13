/*
 * 7569.cpp
 *
 *  Created on: 2017. 7. 13.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>
using namespace std;

//위, 아래, 왼쪽, 오른쪽, 앞, 뒤
int ax[6] = {0,0, 1, -1, 0, 0};
int ay[6] = {0, 0, 0, 0, 1, -1};
int az[6] = {1,-1, 0, 0,0,0};

struct Node{
	int x;
	int y;
	int z;
	int cnt;

	Node(int x, int y, int z, int cnt){
		this->x = x;
		this->y = y;
		this->z = z;
		this->cnt = cnt;
	}
};
int R, C, H;
int MaxCount = 0;
int B[100][100][100];
queue<Node> q;

int bfs(){

	int nowCnt = q.size();

	if(nowCnt == MaxCount) return 0;

	while(!q.empty()){

		Node now = q.front();
		q.pop();

		for(int i=0; i<6; i++){
			int newX = now.x+ax[i];
			int newY = now.y+ay[i];
			int newZ = now.z+az[i];

			if(newX >= 0 && newY >=0 && newZ >= 0 && newX < C && newY < R && newZ < H){
				if(B[newX][newY][newZ] == 0){
					B[newX][newY][newZ] = 1;
					nowCnt++;
					q.push(Node(newX, newY, newZ, now.cnt+1));
					if(nowCnt == MaxCount) return now.cnt+1;
				}
			}


		}
	}

	return -1;
}



int main(){

	cin >> R >> C >> H;

	MaxCount = R*C*H;

	for(int k = 0; k<H; k++){
		for(int i=0; i<C; i++){
			for(int j=0; j<R; j++){
				cin >> B[i][j][k];
				if(B[i][j][k] == 1){
					q.push(Node(i,j,k,0));
				}
				if(B[i][j][k] == -1)
					MaxCount--;
			}
		}
	}
	cout<<bfs()<<endl;

	return 0;
}

