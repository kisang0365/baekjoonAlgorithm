/*
 * 2011.cpp
 *
 *  Created on: 2017. 7. 13.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
using namespace std;

const int DIVIDE = 1000000;

int main(){

	int T = 10;
	int Dp[5000] = {1, };
	string s;
	cin >> s;

	if((int)s[0]-'0' == 0) Dp[1] = 0;
	else Dp[1] = 1;

	for(int i=2; i<=s.length(); i++){
		int n = (int)(s[i-1]-'0');
		int bn = (int)(s[i-2]-'0');

		if(n > 0)
			Dp[i] = Dp[i-1]%DIVIDE;

		if(bn*10+n <= 26 && bn*10+n >= 10)
			Dp[i] = (Dp[i] + Dp[i-2]) % DIVIDE;

	}

	cout<<Dp[s.length()]<<endl;
	return 0;
}



