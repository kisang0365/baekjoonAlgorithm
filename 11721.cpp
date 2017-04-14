/*
 * 11721.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

int main(){

	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		cout<<s[i];
		if(i%10 == 9) cout<<endl;
	}



	return 0;
}


