/*
 * 2740.cpp
 *
 *  Created on: 2017. 6. 2.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N, M, K;
	cin >> N >> M;

	int First[101][101];
	int Second[101][101];
	int ans[101][101];

	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin >> First[i][j];
		}
	}

	cin >> M >> K;

	for(int i=0; i<M; i++){
		for(int j=0; j<K; j++){
			cin >> Second[i][j];
		}
	}

	for(int i=0; i<N; i++){
		for(int j=0; j<K; j++){
			int sum = 0;
			for(int k=0; k<M; k++){
				int r = First[i][k]*Second[k][j];
				sum+=r;
			}
			ans[i][j] = sum;
			cout<<ans[i][j]<<' ';
		}
		cout<<endl;
	}


	return 0;
}


