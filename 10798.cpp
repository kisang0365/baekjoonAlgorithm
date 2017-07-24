/*
 * 10798.cpp
 *
 *  Created on: 2017. 7. 24.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

int main(){

	string str[5];

	for(int i=0; i<5; i++){
		cin >> str[i];
	}

	for(int j=0; j<16; j++){
		for(int i=0; i<5; i++){
			if(j < str[i].length())
				cout<<str[i].at(j);
		}
	}


	return 0;
}


