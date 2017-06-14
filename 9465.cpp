/*
 * 9465.cpp
 *
 *  Created on: 2017. 6. 14.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int Dp[2][1000001];
	int T;
	cin >> T;

	while(T--){
		int n;
		cin >> n;

		Dp[0][0] = 0;
		Dp[1][0] = 0;

		for(int i=0; i<2; i++){
			for(int j=1; j<=n; j++){
				cin >> Dp[i][j];
			}
		}

		for(int j=2; j<=n; j++){
			for(int i=0; i<2; i++){
				Dp[i][j] = Dp[i][j] + max(Dp[(i+1)%2][j-1] , max(Dp[0][j-2] , Dp[1][j-2]));
			}
		}

		cout<<max(Dp[0][n],Dp[1][n])<<endl;

	}

	return 0;
}


