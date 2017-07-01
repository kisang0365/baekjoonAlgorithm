/*
 * 11022.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */

#include<iostream>
#include<cstdio>
using namespace std;

int main(){

	int T;
	cin >> T;
	for(int i=1; i<=T; i++){
		int n1,n2;
		cin >> n1 >> n2;
		//Case #1: 1 + 1 = 2
		printf("Case #%d: %d + %d = %d\n", i, n1, n2 ,n1+n2);

	}


	return 0;
}


