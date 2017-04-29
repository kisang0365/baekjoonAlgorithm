/*
 * 10872.cpp
 *
 *  Created on: 2017. 4. 29.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;
	int p[13] = {1, 1, };

	for(int i=2; i<=N; i++){
		p[i] = p[i-1] * i;
	}

	cout<<p[N];

	return 0;
}

