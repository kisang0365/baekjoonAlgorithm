/*
 * 3053.cpp
 *
 *  Created on: 2017. 4. 8.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>

using namespace std;

#define _USE_MATH_DEFINES

int main(){
	double r;
	cin >> r;

	cout.setf(ios::fixed);
	cout.precision(6);
	cout<<r*r*M_PI<<endl;
	cout<<2*r*r<<endl;
	return 0;
}

