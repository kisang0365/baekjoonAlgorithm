/*
 * 2839.cpp
 *
 *  Created on: 2017. 4. 13.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N; // 3<=N<=5000
	cin>> N;
	int count = N/5;
	int rest = N%5;

	while(rest!= 0){
		if(count==-1){
			break;
		}

		if(rest%3 == 0){
			count += rest/3;
			break;
		}
		count--;
		rest += 5;
	}
	cout<<count<<endl;
	return 0;
}


