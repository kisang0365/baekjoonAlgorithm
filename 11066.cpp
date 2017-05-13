/*
 * 11066.cpp
 *
 *  Created on: 2017. 5. 13.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int Dp[501][501];
	int sum[501];
	int T;
	cin >> T;
	while(T--){

		int fileNum;
		cin >> fileNum;

		for(int i=0; i<=fileNum; i++){
			for(int j=0; j<=fileNum; j++){
				Dp[i][j] = 0;
			}
		}

		for(int i=1; i<=fileNum; i++){
			cin >> sum[i];
			sum[i] += sum[i-1];
		}

		for(int i=1; i <= fileNum; i++){

			for(int j=1; j+i<=fileNum; j++){

				for(int k=j; k<i+j; k++){
					int x = Dp[j][k] + Dp[k+1][i+j];
					if(Dp[j][i+j] == 0) Dp[j][i+j] = x;
					else {
						if(Dp[j][i+j] > x) Dp[j][i+j] = x;
					}
				}
				Dp[j][i+j] = Dp[j][i+j] + sum[i+j] - sum[j-1];
			}

		}

		cout<<Dp[1][fileNum]<<endl;

	}



	return 0;
}
