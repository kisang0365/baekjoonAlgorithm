/*
 * 2530.cpp
 *
 *  Created on: 2017. 7. 2.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

void DigitalTime(int H, int M, int S, int D){

	int makeSecond = (H*60*60 + M*60 + S) + D;
	if(makeSecond >= 24*60*60) makeSecond %= 24*60*60;

	cout<< makeSecond/(60*60)<<' ';
	makeSecond%= 60*60;
	cout<< makeSecond/60 <<' ';
	makeSecond%=60;
	cout<<makeSecond<<endl;
}

int main(){

	int H, M, S, D;
	cin >> H >> M >> S >> D;

	DigitalTime(H,M,S,D);

	return 0;
}


