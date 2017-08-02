/*
 * 9507.cpp
 *
 *  Created on: 2017. 8. 2.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
using namespace std;

long long int Dp[70];

long long int fibo(int n){

	if(Dp[n] != -1 ) return Dp[n];

	if(n < 2) return 1;
	else if(n == 2) return 2;
	else if(n==3) return 4;
	else{
		return Dp[n] = fibo(n-1) + fibo(n-2) + fibo(n-3) +fibo(n-4);
	}

}



int main(){

	int T;
	cin >> T;
	fill(Dp, Dp+70, -1);
	for(int i=0; i<T; i++){
		int n;
		cin >> n;

		cout<<fibo(n)<<endl;
	}


	return 0;
}


