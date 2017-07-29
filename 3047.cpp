/*
 * test.cpp
 *
 *  Created on: 2017. 7. 29.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int n[3];
	cin >> n[0] >> n[1] >> n[2];

	sort(n, n+3);

	for(int i=0; i<3; i++){
		char a;
		cin >> a;
		cout<<n[a-'A']<< ' ';
	}
}

