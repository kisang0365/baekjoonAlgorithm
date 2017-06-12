/*
 * 2606.cpp
 *
 *  Created on: 2017. 6. 11.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>

using namespace std;

int cnt = 0;
int C, N;

int computer[101][101];
int visit[101] = {0 , };

void dfs(int n){

	visit[n] = 1;

	for(int i=1; i<=C; i++){

		if(!visit[i] && computer[i][n] == 1){
			cnt++;
			visit[i] = 1;
			dfs(i);
		}

	}

	return;
}

int main(){

	cin >> C >> N;


	for(int i=0; i<N; i++)
	{
		int a, b;
		cin >> a >> b;
		computer[a][b] = 1;
		computer[b][a] = 1;
	}

	dfs(1);

	cout<<cnt<<endl;

	return 0;
}


