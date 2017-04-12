/*
 * 1065.cpp
 *
 *  Created on: 2017. 4. 12.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int count = 0;
	if(N<100) count=N;
	else{
		count = 99;
		for(int i=100; i<=N; i++){
				int a = i/100 - (i/10)%10;
				int b = (i/10)%10 - i%10;
				if(a == b) count++;
		}
	}
	cout<<count;

	return 0;
}

