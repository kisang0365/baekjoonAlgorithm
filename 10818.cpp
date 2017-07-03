/*
 * 10818.cpp
 *
 *  Created on: 2017. 7. 3.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;


int main(){

	int Min = 1000000;
	int Max = -1000000;
	int N, num;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> num;
		if(num < Min) Min = num;
		if(num > Max) Max = num;
	}
	cout<<Min<< ' '<<Max;
	return 0;
}


