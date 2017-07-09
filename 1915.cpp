/*
 * test.cpp
 *
 *  Created on: 2017. 7. 9.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


int main(){

	int Max = 0;
	int n, m;
	cin >> n >> m;
	vector< vector<char> > v(n+1, vector<char>(m+1,0));
	vector< vector<int> > Dp(n+1, vector<int>(m+1,0));


	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin >> v[i][j];
			v[i][j] -= '0';
			Dp[i][j] = (int)v[i][j];
			if((int)v[i][j] == 1) Max = 1;
		}
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){

			if(Dp[i][j] != 0){
				Dp[i][j] = min(min(Dp[i-1][j-1], Dp[i-1][j]), Dp[i][j-1]) + 1;

				if(Dp[i][j] > Max) Max = Dp[i][j];
			}
		}
	}

	cout<<Max*Max<<endl;
	return 0;


}
