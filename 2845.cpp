/*
 * 2845.cpp
 *
 *  Created on: 2017. 7. 27.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;


int main(){

	int L, K;
	cin >> L >> K;

	for(int i=0; i<5; i++){
		int n;
		cin >> n;
		cout<<n-L*K<<' ';
	}



	return 0;
}



