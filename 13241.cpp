/*
 * 13241.cpp
 *
 *  Created on: 2017. 5. 16.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){
	long long int A, B;
	cin >> A >> B;

	if(A > B){
		long long int temp = A;
		A = B;
		B = temp;
	}

	for(long long int i=1; i<=A; i++){
		long long int value = B*i;
		if( value%A == 0 ){
			cout<<value<<endl;
			break;
		}
	}

	return 0;
}




