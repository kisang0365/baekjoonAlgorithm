/*
 * 10871.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N, X;
	int A;
	cin >> N >> X;
	for(int i=0; i<N; i++){
		cin >> A;
		if(A<X)  cout<<A<<" ";
	}

	return 0;
}
