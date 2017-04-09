/*
 * 1932.cpp
 *
 *  Created on: 2017. 4. 9.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int T[501][501];
int Dp[501][501];

int main(){

	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
				cin >> T[i][j];
		}
	}

	Dp[0][0] = T[0][0];

	for(int i=0; i<n-1; i++){
		for(int j=0; j<=i; j++){

			if(Dp[i+1][j] < Dp[i][j] + T[i+1][j])
				Dp[i+1][j] = Dp[i][j] + T[i+1][j];

			if(Dp[i+1][j+1] < Dp[i][j] + T[i+1][j+1])
							Dp[i+1][j+1] = Dp[i][j] + T[i+1][j+1];

		}
	}
	int max = 0;
	for(int j=0; j<n; j++){
			if(max<Dp[n-1][j]) max = Dp[n-1][j];
	}
	cout<<max<<endl;

}


