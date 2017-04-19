/*
 * 1978.cpp
 *
 *  Created on: 2017. 4. 19.
 *      Author: chokisang
 */



#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int prime[1001] = {0, };

	for(int i=1; i<=1000; i++){
		int j=i-1;
		while(j>=1){
			if(j==1) {
				prime[i] = 1;
				break;
			}
			if(i%j == 0){
				prime[i] = 0;
				break;
			}
			j--;
		}
	}

	int count =0;
	int number;
	for(int i=0; i<N; i++){
		cin >> number;
		if(prime[number] == 1) count++;
	}
	cout<<count<<endl;

	return 0;
}

