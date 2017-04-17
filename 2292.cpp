/*
 * 2292.cpp
 *
 *  Created on: 2017. 4. 17.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	int num = 1;
	int count = 1;
	cin >> N;

	while(N>num){
		num = num + count * 6;
		count++;

	}

	cout<<count<<endl;

	return 0;
}
