/*
 * 11048.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int candy[1001][1001];
int D[1001][1001];

int getCandy(int N, int M){

	for(int i=0; i<=N; i++){
		for(int j=0; j<=M; j++){
			D[i][j] = 0;
		}
	}

	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			D[i][j] = max(max(D[i-1][j], D[i-1][j-1]),D[i][j-1]) + candy[i][j];
		}
	}

	return D[N][M];
}


int main(){

	int N, M;
	cin >> N >> M;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> candy[i][j];
		}

	}

	cout<<getCandy(N, M)<<endl;
	return 0;
}


