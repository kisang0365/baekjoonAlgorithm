/*
 * 2156.cpp
 *
 *  Created on: 2017. 5. 11.
 *      Author: chokisang
 */


#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int n;
	cin >> n;

	int g[100001];
	for(int i=1; i<=n; i++)
		cin >> g[i];

	//0안먹음 , 처음먹음 , 전에꺼 먹음,
	int Dp[100001];

	Dp[1] = g[1];
	if(n>=2) Dp[2] = g[1]+g[2];

	for(int i=3; i<=n; i++){
			int ans = 0;
			ans = max(g[i] + Dp[i-2] , Dp[i-1]);
			ans = max(ans, g[i]+ g[i-1] + Dp[i-3]);
			Dp[i] = ans;
	}
	cout<<Dp[n]<<endl;

	return 0;
}

//방법은 전에껄 먹느냐 안먹느냐의 차이.
//연속으로 3잔 못먹어.
//





