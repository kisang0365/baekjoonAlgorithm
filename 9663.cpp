/*
 * 9663.cpp
 *
 *  Created on: 2017. 7. 2.
 *      Author: chokisang
 */

#include<iostream>
#include<cstdlib>
using namespace std;

int N;
int ans = 0;
int board[16][16];

void dfs(int x,int y){

	if(y == N){
		ans++;
	}

	int dx = x;
	int dy = y;
	while(dx <= N && dy <= N){
		if(board[dx][dy] == 0) board[dx][dy] = y;
		dx++; dy++;
	}
	dx = x;
	dy = y;
	while(dx >= 1 && dy <= N){
		if(board[dx][dy] == 0) board[dx][dy] = y;
		dx--; dy++;
	}

	dx = x;
	dy = y;
	while(dy<= N){
		if(board[dx][dy] == 0) board[dx][dy] = y;
		dy++;
	}

	if(y+1 <= N){
		for(int a=1; a<=N; a++){
			if(board[a][y+1] == 0){
				dfs(a, y+1);
			}
		}
	}

	dx = x;
	dy = y;
	while(dx <= N && dy <= N){
		if(board[dx][dy] == y) board[dx][dy] = 0;
		dx++; dy++;
	}

	dx = x;
	dy = y;
	while(dx >= 1 && dy <= N){
		if(board[dx][dy] == y) board[dx][dy] = 0;
		dx--; dy++;
	}

	dx = x;
	dy = y;
	while(dy<= N){
		if(board[dx][dy] == y) board[dx][dy] = 0;
		dy++;
	}
}

int main(){

	cin >> N;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			board[i][j] = 0;
		}
	}

	//1 = 1   2 = 0  3 = 0
	for(int i=1; i<=N; i++){
		dfs(i, 1);
	}
	cout<<ans<<endl;
	return 0;
}


