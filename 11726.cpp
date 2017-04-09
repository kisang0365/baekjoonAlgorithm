#include<iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int Dp[1002];

	Dp[1] = 1;
	Dp[2] = 2;

	for(int i=3; i<=n; i++){
		Dp[i] = (Dp[i-1] + Dp[i-2])%10007;
	}
	cout<< Dp[n] <<endl;

	return 0;
}
