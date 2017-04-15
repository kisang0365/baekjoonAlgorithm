/*
 * 2908.cpp
 *
 *  Created on: 2017. 4. 15.
 *      Author: chokisang
 */
#include<iostream>
#include<cmath>
using namespace std;

int makeNew(int N){
	int temp = 0;
	while(N>0){
		temp=temp*10 + N%10;
		N/=10;
	}
	return temp;
}

int main(){

	int A, B;
	cin >> A >> B;

	A = makeNew(A);
	B = makeNew(B);
	cout<<max(A,B)<<endl;

	return 0;
}




