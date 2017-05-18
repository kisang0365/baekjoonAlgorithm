/*
 * 10253.cpp
 *
 *  Created on: 2017. 5. 18.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int gcd(int u, int v){
	if(v == 0)
		return u;
	return gcd(v, u%v);
}

int main(){

	int T;
	cin >> T;

	while(T--){

		int a, b;

		cin >> a >> b;

		while(1){

			int G = gcd(b,a);

			a = a/G;
			b = b/G;

			if(a==1){
				cout<<b<<endl;
				break;
			}

			int x;
			x = b/a;
			if(b%a != 0) x++;

			a = a*x - b;
			b = b*x;

		}

	}


	return 0;
}


