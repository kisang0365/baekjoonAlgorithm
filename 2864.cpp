/*
 * 2864.cpp
 *
 *  Created on: 2017. 7. 23.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
using namespace std;

int main(){

	string a, b;
	cin >> a >> b;

	int A[8];
	int B[8];

	int BA = 0, SA = 0;
	int BB = 0, SB = 0;

	int carry = 1;
	for(int i=a.length()-1; i>=0; i--){
		A[i] = a.at(i) - '0';

		if(A[i] == 5 || A[i] == 6){
			BA = BA + 6*carry;
			SA = SA + 5*carry;
		}
		else{
			BA = BA + A[i]*carry;
			SA = SA + A[i]*carry;
		}
		carry *= 10;
	}

	carry = 1;

	for(int i=a.length()-1; i>=0; i--){
		B[i] = b.at(i) - '0';

		if(B[i] == 5 || B[i] == 6){
			BB = BB + 6*carry;
			SB = SB + 5*carry;
		}
		else{
			BB = BB + B[i]*carry;
			SB = SB + B[i]*carry;
		}
		carry *= 10;
	}

	cout<<SA+SB<< ' '<< BA+BB<<endl;

	return 0;
}


