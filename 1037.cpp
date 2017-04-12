/*
 * 1037.cpp
 *
 *  Created on: 2017. 4. 12.
 *      Author: chokisang
 */


#include<iostream>
#include<algorithm>

using namespace std;

int A[50];

int main(){

	int N;
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> A[i];

	sort(A, A+N);

	long long int result = A[0] * A[N-1];

	cout<<result<<endl;

	return 0;
}

