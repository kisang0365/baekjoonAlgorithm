/*
 * 1987.cpp
 *
 *  Created on: 2017. 6. 28.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int R, C;
int board[21][21];
bool check[27] = {false, };
int ax[4] = {0,0, 1, -1};
int ay[4] = {1, -1, 0, 0};
int ans = 0;

int dfs(int x, int y, int sum){

	if(sum > ans) ans = sum;

	check[board[x][y]] = true;

	for(int i=0; i<4; i++){

		int newX = x+ax[i];
		int newY = y+ay[i];

		if(1<=newX && newX <= R && 1<=newY && newY <= C){
			if(check[board[newX][newY]] == false){
				dfs(newX,newY, sum+1);
			}
		}
	}
	check[board[x][y]] = false;
}

int main(){

	cin >> R >> C;

	for(int i=1; i<=R; i++){
		for(int j=1; j<=C; j++){
			char c;
			cin >> c;
			board[i][j] = c - 'A';
		}
	}
	dfs(1,1,1);
	cout<<ans<<endl;

	return 0;
}


