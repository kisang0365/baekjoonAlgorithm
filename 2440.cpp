/*
 * 2440.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;
	for(int i=1; i<=N; i++){
		for(int j=N; j>=i; j--){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}








