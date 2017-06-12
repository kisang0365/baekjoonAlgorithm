/*
 * 2163.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>

using namespace std;

int main(){

	int N, M;
	cin >> N >> M;

	int X[301], Y[301];
	X[1] = 0;
	Y[1] = 0;

	int count = 1;

	//X찾기
	for(int i=2; i<=N; i++){
		X[i] = 1 + X[i/2] + X[i-i/2];
	}

	for(int i=2; i<=M; i++){
		Y[i] = 1 + Y[i/2] + Y[i-i/2];
	}

	cout<<X[N] + N*Y[M]<<endl;


	return 0;
}


