/*
 * 5622.cpp
 *
 *  Created on: 2017. 4. 15.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int number(char a){
	int temp = 0;

	if(a >= 'A' && a <= 'C') temp = 2;
	else if(a >= 'D' && a <= 'F') temp = 3;
	else if(a >= 'G' && a <= 'I') temp = 4;
	else if(a >= 'J' && a <= 'L') temp = 5;
	else if(a >= 'M' && a <= 'O') temp = 6;
	else if(a >= 'P' && a <= 'S') temp = 7;
	else if(a >= 'T' && a <= 'V') temp = 8;
	else temp = 9;

	return temp;
}


int main(){

	string s;
	cin >> s;
	int sum = 0;
	for(int i=0; i<s.length(); i++){
		sum += number(s[i])+1;

	}
	cout<<sum<<endl;

	return 0;
}


