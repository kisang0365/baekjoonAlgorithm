/*
 * 10426.cpp
 *
 *  Created on: 2017. 4. 3.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

int monthPerDate(int y, int m){
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		return 31;
	else if( m == 2){
		if(y%400 == 0)
			return 29;
		else if(y%4 == 0 && y%100 != 0)
			return 29;
		else return 28;
	}
	else return 30;
}

string print(int y, int m, int d){

	string str = to_string(y) + "-";

	if(m >= 10) str += to_string(m);
	else str += "0"+to_string(m);
	str += "-";
	if(d>=10) str += to_string(d);
	else str += "0"+to_string(d);

	return str;
}

int main(){

	string date;
	int day;
	cin >> date >> day;

	int y,m,d;
	y = stoi(date.substr(0,4));
	m = stoi(date.substr(5,7));
	d = stoi(date.substr(8,10));

	while(day > 0){

		int monthDate = monthPerDate(y, m);
		if( d + day > monthDate+1){
			m += 1;
			day = day - (monthDate - d +1);
			d = 1;
		}
		else{
			d += day -1;
			day = 0;
		}

		if(m > 12){
			m = 1;
			y += 1;
		}

	}
	cout<<print(y,m,d)<<endl;

	return 0;
}
