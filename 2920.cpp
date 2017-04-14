/*
 * 2920.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

#define MAX 8

int main(){

	int a[MAX];
	for(int i=0; i<MAX; i++)
		cin >> a[i];

	int check[2] = {0,};
	for(int i=0; i<MAX; i++){
		if(i+1 == a[i]) check[0]++;
		else if(MAX-i == a[i]) check[1]++;
	}

	if(check[0] == 8) cout<<"ascending";
	else if(check[1] == 8) cout<<"descending";
	else cout<<"mixed";

	return 0;
}
