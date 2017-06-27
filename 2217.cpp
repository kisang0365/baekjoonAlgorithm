/*
 * 2217.cpp
 *
 *  Created on: 2017. 6. 27.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	int arr[1000001];
	int N;
	long long int Max = 0;

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> arr[i];
	}

	sort(arr, arr+N);

	for(int i=0; i<N; i++){
		long long int num = arr[i] * (N-i);
		if(Max < num) Max = num;
	}
	cout<<Max<<endl;

}


