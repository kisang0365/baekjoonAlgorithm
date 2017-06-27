/*
 * 1309.cpp
 *
 *  Created on: 2017. 6. 27.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int Dp[100001];
	Dp[0] = 1;
	Dp[1] = 3;
	for(int i=2; i<=N; i++){
		Dp[i] = Dp[i-1]*2 + Dp[i-2];
		if(Dp[i] > 9901) Dp[i] %= 9901;
	}

	cout<<Dp[N]%9901<<endl;

	return 0;
}


