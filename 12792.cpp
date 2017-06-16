/*
 * 12792.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int test = 10000001;

	for(int i=1; i<=N; i++){
		int num;
		cin >> num;
		if(num == i) {
			test = -1;
			break;
		}
	}

	if(test == -1) cout<<test<<endl;
	else cout<<test<<endl;



	return 0;
}


