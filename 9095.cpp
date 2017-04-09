/*
 * test.cpp
 *
 *  Created on: 2017. 4. 9.
 *      Author: chokisang
 */
#include<iostream>

using namespace std;

int T[12];
void plus1(){
	T[1] = 1;
	T[2] = 2;
	T[3] = 4;

	for(int i=4; i<=12; i++){
		T[i] = T[i-1] + T[i-2] + T[i-3];
	}

}

int main(void){

	int testCases;
	cin >> testCases;

	plus1();

	for(int i=0; i<testCases; i++){
		int Number;
		cin >> Number;

		cout<<T[Number] <<endl;

	}

	return 0;
}


