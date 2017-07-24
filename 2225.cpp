/*
 * 2225.cpp
 *
 *  Created on: 2017. 7. 24.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

const int DEVIDE = 1000000000;

int main(){

	//0부터 N까지 정수 K개 더해서.  20이 되야함. 0,20 ,1 19 2 18 ..9 11 ,
	int N,K;
	cin >> N >> K;

	long long int Dp[201][201];

	for(int i=0; i<=N; i++){
		Dp[1][i] = 1;
	}

	for(int i=1; i<=K; i++){

		for(int j=0; j<=N; j++){
			for(int l = 0; l<=j; l++){
				Dp[i][j] += Dp[i-1][j-l];
				Dp[i][j] %= DEVIDE;
			}
		}
	}

	cout<<Dp[K][N]<<endl;

	return 0;
}


