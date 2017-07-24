/*
 * 1049.cpp
 *
 *  Created on: 2017. 7. 24.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//줄개수 , 브랜드 .
	int N, M;
	int Dp[105] = {0, };
	fill(Dp+1, Dp+102, 1001);
	cin >> N >> M;

	int min6=1e5;
	int min1=1e5;

	for(int i=0; i<M; i++){

		int package, one;
		cin >> package >> one;

		if(min6 > package) min6 = package;
		if(min1 > one) min1 = one;
	}
	for(int i=1; i<=N; i++){

		if(i <= 6){
			Dp[i] = Dp[i-1]+min1 < min6 ? Dp[i-1]+min1 : min6;
		}
		else{
			//경우의수  1. Dp[i-6]+min6 ,or Dp[i-1]+min1 or Dp[i-1]+min6;
			Dp[i] = Dp[i-1]+min1 < Dp[i-6]+min6 ? Dp[i-1]+min1 : Dp[i-6]+min6;
		}
	}
	cout<<Dp[N]<<endl;


	return 0;
}


