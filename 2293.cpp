/*
 * 2293.cpp
 *
 *  Created on: 2017. 5. 11.
 *      Author: chokisang
 */


#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	int n, k;
	cin >> n >> k;

	int value[100];
	int Dp[10001] ={1, 0, };

	for(int i=0; i<n; i++){
		cin >> value[i];
	}

	sort(value, value+n);

	for(int i=0; i<n; i++){
		for(int j=value[i]; j<=k; j++){
			Dp[j] += Dp[j-value[i]];
		}
	}
	cout<<Dp[k]<<endl;
	return 0;
}

