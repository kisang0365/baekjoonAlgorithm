/*
 * 2455.cpp
 *
 *  Created on: 2017. 5. 17.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int train[5] = {0, };
	int in[5] = {0, };
	int out[5] = {0, };
	int max = 0;

	for(int i=1; i<=4; i++){
		cin >> out[i] >> in[i];
	}
	for(int i=1; i<=4; i++){
		train[i] = train[i-1] + in[i] - out[i];

		if(train[i] >= max) max = train[i];

	}

	cout<<max<<endl;

	return 0;
}

