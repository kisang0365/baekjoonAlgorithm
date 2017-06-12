/*
 * 2445.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int last = 2*n;

	for(int i=0; i<n; i++){
		for(int j=0; j<last; j++){

			if(j<=i || j>=last-i-1) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}

	for(int i=1; i<n; i++){
		for(int j=0; j<last; j++){

			if(j<n-i || j>=n+i) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}


