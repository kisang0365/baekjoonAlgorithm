/*
 * 2749.cpp
 *
 *  Created on: 2017. 4. 26.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

const int mod = 1000000;
const int p = 15*(mod/10);


int main(){

	long long int n;
	cin >> n;

	long long int Fibo[p];

	Fibo[0] = 0;
	Fibo[1] = 1;

	for(int i=2; i<p; i++){
		Fibo[i] = Fibo[i-2] + Fibo[i-1];
		Fibo[i] %= mod;
	}

	cout<<Fibo[n%p]<<endl;

	return 0;
}







