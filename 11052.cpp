/*
 * 11052.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;

	cin >> N;

	int B[1001];
	int sell[1001];
	sell[0] = 0;
	for(int i=1; i<=N; i++){
		cin>>B[i];
		sell[i] = 0;
	}

	for(int i=1; i<=N; i++){

		for(int j=1; j<=i; j++){
			int num = sell[i-j] + B[j];
			if(num > sell[i]) sell[i] = num;
			//1개 팔떄 1개 팔때
		}
	}

	cout<<sell[N]<<endl;

	return 0;
}


