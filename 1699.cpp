/*
 * 1699.cpp
 *
 *  Created on: 2017. 6. 26.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int D[100001];

int Dp(int N){

	if(D[N] != 0) return D[N];

	for(int i=1; i*i <= N; i++){
		if(D[N] > D[N-i*i]+1 || D[N] == 0)
			D[N] = Dp(N-i*i) + 1;
	}

	return D[N];

}

int main(){

	int N;
	cin >> N;


	cout<<Dp(N)<<endl;


	return 0;
}


