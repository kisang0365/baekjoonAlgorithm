/*
 * 5557.cpp
 *
 *  Created on: 2017. 7. 28.
 *      Author: chokisang
 */

#include<iostream>

int arr[101];
long long int Dp[101][21];
using namespace std;

int N;
int ans = 0;

long long int solve(int idx, int sum){

	if(sum <0 || sum > 20) return 0;

	if(idx == N-2){

		if(sum == arr[N-1])
			Dp[idx][sum] = 1;
		else
			Dp[idx][sum] = 0;
		return Dp[idx][sum];

	}

	if(Dp[idx][sum] != -1){
		return Dp[idx][sum];
	}

	long long int ans = 0;

	ans += solve(idx+1, sum + arr[idx+1]);
	ans += solve(idx+1, sum - arr[idx+1]);

	return Dp[idx][sum] = ans;
}



int main(){

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> arr[i];
	}

	for(int i=0; i<N; i++){
		for(int j=0; j<21; j++){
			Dp[i][j] = -1;
		}
	}

	cout<<solve(0, arr[0])<<endl;

	for(int i=0; i<N; i++){
		for(int j=0; j<21; j++){
			cout<<Dp[i][j]<<' ';
		}
		cout<<endl;
	}

}


