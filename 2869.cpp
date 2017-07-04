/*
 * 2869.cpp
 *
 *  Created on: 2017. 7. 3.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int A, B, V;
	cin >> A >> B >> V;

	int start = A;
	int cnt = 1;

	int diff = A - B;
	int dis = V-start;

	int go = dis / diff;
	if(dis%diff != 0) go++;

	cnt += go;

	cout<<cnt<<endl;




}


