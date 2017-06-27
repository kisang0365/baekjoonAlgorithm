/*
 * 1937.cpp
 *
 *  Created on: 2017. 6. 27.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>

using namespace std;

int forest[502][502];
int Dp[502][502];
int N;
int ax[4] = {0, 0, 1, -1};
int ay[4] = {1, -1, 0, 0};

struct Point{
	int x;
	int y;

	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
};


int bfs(int i, int j){

	if(Dp[i][j] != 0) return Dp[i][j];

	int maxNum = 0;

	for(int a=0; a<4; a++){
		int newX = i+ax[a];
		int newY = j+ay[a];

		if(1<=newX && newX<=N && 1<=newY && newY <= N){

			if(forest[i][j] < forest[newX][newY]){
				int num = bfs(newX, newY);
				if(num > maxNum) maxNum = num;
			}
		}
	}
	Dp[i][j] = 1 + maxNum;

	return Dp[i][j];
}


int main(){

	cin >> N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin >> forest[i][j];
		}
	}
	int ans = 0;

	for(int i=1; i<=N; i++){
		for(int j=1 ; j<=N; j++){
			int num = bfs(i,j);
			if(ans < num) ans = num;
		}
	}

	cout<<ans<<endl;


	return 0;

}


