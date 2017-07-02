/*
 * 5543.cpp
 *
 *  Created on: 2017. 7. 2.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int sprice, mprice, hprice, coke, sprite;
	cin >> sprice >> mprice >> hprice >> coke >> sprite;

	int ans = min( sprice , min (mprice, hprice)) + min(coke, sprite) - 50;

	cout<<ans<<endl;

	return 0;
}


