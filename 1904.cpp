/*
 * 1904.cpp
 *
 *  Created on: 2017. 6. 27.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

const int Divide = 15746;

int main(){

	int N;
	cin >> N;

	int Dp[3] = {0, 1, 2};

	for(int i=3; i<=N; i++){

		if(i%2 == 1){
			Dp[1] = Dp[1]+Dp[2];
			if(Dp[1] > Divide ) Dp[1] %= Divide;
		}
		else{
			Dp[2] = Dp[1] + Dp[2];
			if(Dp[2] > Divide) Dp[2] %= Divide;
		}

	}

	if(N%2 == 1) cout<<Dp[1]<<endl;
	else cout<<Dp[2]<<endl;

	return 0;
}


