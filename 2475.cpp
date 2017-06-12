/*
 * 2475.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

const int devide = 10;

int main(){

	int n = 5;
	int ans = 0;

	for(int i=0; i<n; i++){
		int number;
		cin >> number;
		ans += (number*number)%10;
	}
	cout<<ans%10<<endl;
	return 0;
}


