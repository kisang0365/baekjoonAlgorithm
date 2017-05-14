/*
 * 9461.cpp
 *
 *  Created on: 2017. 5. 14.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	long long int P[101]= {0, 1, 1, };
	int N, T;
	cin >> T;

	for(int i=3; i<=100; i++)
		P[i] = P[i-3] + P[i-2];

	while(T--){
		cin >> N;
		cout<<P[N]<<endl;
	}
	return 0;
}


