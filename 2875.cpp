/*
 * 2875.cpp
 *
 *  Created on: 2017. 7. 26.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int W, M, K;

	cin >> W >> M >> K;

	int MaxW = W/2, MaxM = M;

	int Waste = 0;
	int Max;
	if(MaxW >= MaxM){
		Waste = W - MaxM*2;
		Max = MaxM;
	}
	else{
		Waste = M - MaxW;
		Max = MaxW;
	}
	int num = 0;
	if(Waste < K){
		num = (K-Waste)/3 + 1;
		if( (K-Waste)%3 == 0) num = num-1;
	}

	cout<<Max-num<<endl;

	return 0;
}


