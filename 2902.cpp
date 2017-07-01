/*
 * 2902.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */

#include<iostream>
#include<cstring>
using namespace std;

string makeString(string str){

	string ans = str.substr(0,1);
	str = str.substr(1);
	int index = str.find_first_of("-");
	while(index != str.npos){
		ans += str.substr(index+1, 1);
		str = str.substr(index+2);
		index = str.find_first_of("-");
	}

	return ans;
}


int main(){

	string str;
	cin >> str;

	cout<<makeString(str)<<endl;

	return 0;
}


