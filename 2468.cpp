/*
 * 2468.cpp
 *
 *  Created on: 2017. 6. 28.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>

using namespace std;

int N;
int area[101][101];
int visit[101][101];
int MaxH = 0;
int ans = 0;
int ax[4] = {0, 0, 1, -1};
int ay[4] = {1, -1, 0, 0};

void input(){
	cin >> N;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin >> area[i][j];
			if(area[i][j] > MaxH) MaxH = area[i][j];
		}
	}
}

void dfs(int x, int y,int h){

	visit[x][y] = 1;

	for(int i=0; i<4; i++){

		int newX = x + ax[i];
		int newY = y + ay[i];

		if(1<=newX && newX<=N && 1<=newY && newY <= N){
			if(visit[newX][newY] == 0 && area[newX][newY] > h){
				dfs(newX, newY, h);
			}
		}
	}

}

int main(){

	input();
	int max = 0;
	for(int h=0; h<MaxH; h++){
		int sum = 0;

		for(int i=1; i<=N; i++)
			fill(visit[i], visit[i]+N+1, 0);

		for(int i=1; i<=N; i++){
			for(int j=1; j<=N; j++){
				if(area[i][j] > h && visit[i][j]==0){
					sum++;
					dfs(i,j, h);
				}
			}
		}

		if(max < sum) max = sum;
	}

	cout<<max<<endl;
}


