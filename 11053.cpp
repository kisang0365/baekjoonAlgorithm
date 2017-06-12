/*
 * 11053.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	int arr[1001];
	int Dp[1001];

	int M = 0;
	cin >> N;

	for(int i=1; i<=N; i++){
		cin >> arr[i];
	}

	for(int i=1; i<=N; i++){

		int min = 0;

		for(int j=0; j<i; j++){
			if(arr[j] < arr[i]){
				if(min < Dp[j])
					min = Dp[j];
			}
		}
		Dp[i] = min + 1;
		if(M < Dp[i])
			M = Dp[i];
	}
	cout<<M<<endl;

	return 0;
}


