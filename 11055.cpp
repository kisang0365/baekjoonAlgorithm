/*
 * 11055.cpp
 *
 *  Created on: 2017. 6. 27.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	//초기 입력값.
	int Arr[1001] = {0,};
	//가장 앞 수까지 가장 더한숫자 큰것 + 자기자신.
	int Dp[1001] = {0, };
	int N, ans = 0;

	cin >> N;

	for(int i=1; i<=N; i++){
		cin >> Arr[i];
	}

	for(int i=1; i<=N; i++){
		int max = 0;
		for(int j=1; j<i; j++){
			if(Arr[i] > Arr[j]){
				if(Dp[j] > max) max = Dp[j];
			}
		}
		Dp[i] = max + Arr[i];
		if(Dp[i] > ans) ans = Dp[i];
	}
	cout<<ans<<endl;

	return 0;
}


