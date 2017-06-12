/*
 * 2444.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */



#include<iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int last = 2*n-1;
	int mid = last/2;

	for(int i=0; i<n; i++){
		for(int j=0; j<last; j++){
			if(mid-i <= j && j<= mid+i) cout<<"*";
			else if(j < mid-i) cout<<" ";
		}
		cout<<endl;
	}

	for(int i=1; i<n; i++){
		for(int j=0; j<last; j++){
			if( i<=j && j< last-i) cout<<"*";
			else if( j < i)cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}


