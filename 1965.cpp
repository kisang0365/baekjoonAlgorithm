/*
 * 1965.cpp
 *
 *  Created on: 2017. 6. 27.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int Dp[1001] = {0, };
	int F[1001];
	int ans = 0;
	for(int i=1; i<=n; i++)
		cin >> F[i];

	//맨 처음껀 먹음.
	Dp[1] = 1;

	for(int i=2; i<=n; i++){
		//앞의 상자중 최대값.
		int max = 0;

		for(int j=1; j<i; j++){
			if(F[i] > F[j]){
				if(Dp[j] > max) max = Dp[j];
			}
		}
		Dp[i] = max+1;
		if(Dp[i] > ans) ans = Dp[i];
	}

	cout<<ans<<endl;

	return 0;
}


