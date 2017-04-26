/*
 * 2747.cpp
 *
 *  Created on: 2017. 4. 26.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int Fibo[46];

int main(){

	int n;
	cin >> n;

	Fibo[0] = 0;
	Fibo[1] = 1;

	for(int i=2; i<=n; i++){
		Fibo[i] = Fibo[i-2] + Fibo[i-1];
	}
	cout<<Fibo[n]<<endl;



	return 0;
}
