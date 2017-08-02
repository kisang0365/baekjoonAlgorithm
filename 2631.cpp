/*
 * 2631.cpp
 *
 *  Created on: 2017. 8. 1.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int N;
int Child[201];
int Dp[201];

int main(){

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> Child[i];

	}
	int Max = 0;
	for(int i=0; i<N; i++){
		Dp[i] = 1;
		for(int j=0; j<i; j++){
			if(Child[j] < Child[i] && Dp[i] < Dp[j]+1){
				Dp[i] = Dp[j]+1;
			}
		}
		if(Max < Dp[i]) Max = Dp[i];
	}
	cout<<N-Max<<endl;

	return 0;
}


