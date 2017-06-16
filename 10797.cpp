/*
 * 10797.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

const int Car = 5;

int main(){

	int day;
	int cnt = 0;
	cin >> day;

	for(int i=0; i<Car; i++){
		int num;
		cin >> num;
		if(day == num) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}

