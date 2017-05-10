/*
 * 10844.cpp
 *
 *  Created on: 2017. 5. 10.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int DIVIDE= 1000000000;

	long long int DP[101][10];

	DP[1][0] = 0;

	for(int i=1; i<=9; i++)
		DP[1][i] = 1;

	for(int i=2; i<=N; i++){
		for(int j=0; j<=9; j++){
			if(j == 0)
				DP[i][j] = DP[i-1][1] % DIVIDE;
			else if(j==9)
				DP[i][j] = DP[i-1][8] % DIVIDE;
			else
				DP[i][j] = (DP[i-1][j-1] + DP[i-1][j+1])%DIVIDE;
		}
	}

	long long int ans =0;

	for(int j=0; j<=9; j++){
		ans += DP[N][j] % DIVIDE;
	//	cout<<DP[N][j] <<endl;
	}

	cout<<ans % DIVIDE<<endl;
	return 0;
}

