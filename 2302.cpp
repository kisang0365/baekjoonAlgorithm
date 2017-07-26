/*
 * 2302.cpp
 *
 *  Created on: 2017. 7. 26.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

long long int Dp[42] = {0, };
int sit[41] = {0, };

int main(){

	int N, M;
	cin >> N >> M;

	for(int i=0; i<M; i++){
		int k;
		cin >> k;
		sit[k] = 1;
	}

	long long int cnt = 1;

	for(int i=1; i<=N; i++){
		if(sit[i] != 1){
			if(cnt == 1) Dp[i] = 1;
			else if(cnt == 2) Dp[i] = 2;
			else{
				Dp[i] = Dp[i-1] + Dp[i-2];
			}
			cnt++;
		}
		else{
			cnt = 1;
		}
	}

	long long int ans = 1;
	for(int i=1; i<=N; i++){

		if(Dp[i+1] == 0 && Dp[i] != 0){
			cnt = Dp[i];
			ans *= cnt;
		}
	}

	cout<<ans<<endl;

	return 0;
}


