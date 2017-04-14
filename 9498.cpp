/*
 * 9498.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

char grade(int N){

	char a;
	if(N>=90) a = 'A';
	else if(N>=80) a = 'B';
	else if(N>=70) a = 'C';
	else if(N>=60) a = 'D';
	else a = 'F';

	return a;
}

int main(){

	int N;
	cin >> N;
	cout<<grade(N)<<endl;

	return 0;
}


