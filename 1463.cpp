/*
 * 1064.cpp
 *
 *  Created on: 2017. 3. 27.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

void check(int X, int count);

int minValue = 0;

int main(void){

	int X;
	cin >> X;

	check(X, 0);
	cout << minValue << endl;

	return 0;
}

void check(int X, int count){
	if(minValue != 0 && minValue < count) return;
	if(X == 1) {
			if(minValue == 0) minValue = count;
			else if(minValue > count) minValue = count;
			return;
	}
	if(X%3 == 0) check(X/3, count+1);
	if(X%2 == 0) check(X/2, count+1);
	check(X-1, count+1);
}


