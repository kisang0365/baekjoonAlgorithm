/*
 * 1152.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
using namespace std;

int main(){

	int count = 0;
	string s;
	getline(cin, s);
	for(int i=0; i<s.length()-1; i++){

		if(s[i] == ' ' && s[i+1] != ' ') {
			count++;
		}
	}
	if(s[0] != ' '){
		count++;
	}

	cout<<count<<endl;

	return 0;
}





