/*
 * 1850.cpp
 *
 *  Created on: 2017. 5. 16.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int gcd(long long int A, long long int B){

	if(B == 0) return A;

	return gcd(B, A%B);

}



int main(){

	long long int A, B;
	cin >> A >> B;

	if( A>= B){
		long long int temp = A;
		A = B;
		B = temp;
	}
	int num1 = gcd(A,B);
	while(num1--)
		cout<<'1';



	return 0;
}


