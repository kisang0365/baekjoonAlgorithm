/*
 * 10988.cpp
 *
 *  Created on: 2017. 7. 30.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
using namespace std;

int IsRight(string str){

	int left = 0;
	int right = str.length()-1;

	while(left <= right){

		if(str[left] != str[right])
			return 0;

		left++;
		right--;

	}

	return 1;
}


int main(){

	string str;

	cin >> str;

	cout<<IsRight(str)<<endl;


	return 0;
}


