/*
 * 1015.cpp
 *
 *  Created on: 2017. 4. 13.
 *      Author: chokisang
 */

#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int A[51];
int P[51];
int main(){

	int N;
	cin>>N;
	for(int i=0; i<N; i++){
		cin >> A[i];
	}

	int X = 0;
	while(X<N){
		int min = 1001;
		int check;
		for(int i=0; i<N; i++){
			if(min > A[i]){
				min = A[i];
				check = i;
			}
		}

		P[check] = X;
		X ++;
		A[check] = 1001;

	}
	for(int i=0; i<N; i++){
		cout<<P[i]<<" ";
	}

	return 0;
}


