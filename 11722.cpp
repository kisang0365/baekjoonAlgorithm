/*
 * 11722.cpp
 *
 *  Created on: 2017. 7. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;
	int Max = 0;

	int A[1001];
	int Dp[1001] = {0, };

	for(int i=0; i<N; i++){
		cin >> A[i];
	}

	for(int i=0; i<N; i++){
		for(int j=0; j<i; j++){
			if(A[i] < A[j]){
				if(Dp[i] < Dp[j]+1){
					Dp[i] = Dp[j]+1;
				}
			}
		}
		if(Dp[i] == 0) Dp[i] = 1;

		if(Dp[i] > Max) Max = Dp[i];
	}

	cout<<Max<<endl;

	return 0;
}


