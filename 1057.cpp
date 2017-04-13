/*
 * 1057.cpp
 *
 *  Created on: 2017. 4. 13.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N, a, b;
	cin >> N >> a >> b;
	int count = 0;

	while(a != b){

		if(a%2 == 1) a+=1;
		a /= 2;
		if(b%2 == 1) b+=1;
		b /= 2;
		count++;
	}
	cout<<count<<endl;



	return 0;
}

