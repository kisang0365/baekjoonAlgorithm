/*
 * 2609.cpp
 *
 *  Created on: 2017. 5. 16.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int gcd(int u, int v){

	if(v == 0) return u;

	return gcd(v, u%v);
}




int main(){

	int A, B;
	cin>>A>>B;

	if(A < B){
		int temp = A;
		A = B;
		B = temp;
	}

	int maxValue = gcd(A, B);
	int minValue = maxValue * (A/maxValue) * (B/maxValue);

	cout<<maxValue<<endl<<minValue<<endl;


	return 0;
}


