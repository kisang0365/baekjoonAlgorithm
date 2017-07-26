/*
 * 10026.cpp
 *
 *  Created on: 2017. 7. 26.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

char Board[101][101];
int Yes[101][101];
int No[101][101];
int N;

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
int ansYes = 0, ansNo = 0;

void dfs(int x, int y, bool yes){

	if(yes) Yes[x][y] = 1;
	else No[x][y] = 1;

	char c = Board[x][y];

	for(int i=0; i<4; i++){

		int nx = x+dx[i];
		int ny = y+dy[i];

		if(yes == true){

			if(0<=nx && nx<N && 0<=ny && ny<N && Yes[nx][ny] == 0 && c==Board[nx][ny]){
				dfs(nx, ny, yes);
			}
		}
		else{

			if(0<=nx && nx<N && 0<=ny && ny<N && No[nx][ny] == 0){
				if(c == 'B' && Board[nx][ny] == 'B'){
					dfs(nx,ny,yes);
				}
				else if(c != 'B' && Board[nx][ny] != 'B'){
					dfs(nx,ny,yes);
				}
			}

		}

	}

}



int main(){

	cin >> N;

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> Board[i][j];
			Yes[i][j] = 0;
			No[i][j] = 0;
		}
	}

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(Yes[i][j] == 0){
				dfs(i, j, true);
				ansYes++;
			}
			if(No[i][j] == 0){
				dfs(i, j, false);
				ansNo++;
			}
		}
	}
	cout<<ansYes<<' '<<ansNo<<endl;


	return 0;
}


