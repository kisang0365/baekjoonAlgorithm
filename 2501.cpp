/*
 * 2501.cpp
 *
 *  Created on: 2017. 7. 3.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int number(int N, int K){
	int now = 0;

	for(int i=1; i<=N; i++){
		if(N%i == 0) now++;
		if(now == K) return now;
	}

	return 0;
}


int main(){

	int N, K;
	cin >> N >> K;

	cout<<number(N,K)<<endl;

	return 0;
}


