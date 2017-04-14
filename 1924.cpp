/*
 * 1924.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */


#include<iostream>
#include<string>
using namespace std;

int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
string str[7] = {"SUN","MON","TUE", "WED", "THU", "FRI", "SAT"};

int main(){

	int x, y;
	cin >> x >> y;

	//1,1 월
	int day = 0;
	for(int i=1; i<x; i++){
		day += arr[i-1];
	}
	day+=y;
	cout<<str[day%7]<<endl;

	return 0;
}
