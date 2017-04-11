/*
 * 1026.cpp
 *
 *  Created on: 2017. 4. 11.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int A[51];
int B[51];
int C[51];

int main(){

	int N;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> A[i];
	}

	for(int i=0; i<N; i++){
			cin >> B[i];
			C[i] = B[i];
	}

	sort(A, A+N);
	sort(C, C+N, greater<int>());

	int sum = 0;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(C[i] == B[j]){
				sum = sum + (B[j] * A[i]);
				B[j] = -1;
			}
		}
	}
	cout<<sum<<endl;

	return 0;
}


