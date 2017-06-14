/*
 * 2010.cpp
 *
 *  Created on: 2017. 6. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;
	int M = 1;

	for(int i=0; i<N; i++){
		int num;
		cin >> num;
		M = M + num - 1;
	}
	cout<<M<<endl;

	return 0;
}



