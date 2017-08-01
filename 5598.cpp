/*
 * 5598.cpp
 *
 *  Created on: 2017. 7. 31.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
using namespace std;

int main(){

	string str;
	cin >> str;

	for(int i=0; i<str.length(); i++){
		char idx = str[i]-3;
		if(idx < 'A') idx += 26;
		cout<<idx;
	}

	return 0;
}


