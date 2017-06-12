/*
 * 10808.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */



#include<iostream>
#include<string>
using namespace std;

int main(){

	string s;
	cin >> s;

	int a[27] = {0, };

	for(int i=0; i<s.length(); i++){
		a[s[i]-'a']++;
	}
	for(int i=0; i<26; i++){
		cout<<a[i]<<' ';
	}



	return 0;
}




