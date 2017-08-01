/*
 * 11656.cpp
 *
 *  Created on: 2017. 7. 31.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

	string str[1001];
	string oriStr;
	cin >> oriStr;

	for(int i=0; i<oriStr.length(); i++){
		str[i] = oriStr.substr(i);
	}

	sort(str, str+oriStr.length());

	for(int i=0; i<oriStr.length(); i++){
		cout<<str[i]<<endl;
	}

	return 0;
}


