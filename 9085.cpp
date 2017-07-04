/*
 * 9085.cpp
 *
 *  Created on: 2017. 7. 3.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int T;
	cin >> T;
	while(T--){
		int N;
		int num, sum =0;
		cin >> N;
		while(N--){
			cin >> num;
			sum += num;
		}
		cout<<sum<<endl;
	}


	return 0;
}


