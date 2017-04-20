/*
 * 1929.cpp
 *
 *  Created on: 2017. 4. 20.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int M, N;
	cin >> M >> N;

	int arr[1000001];
	arr[1] = 1;

	for(int i=2; i<=N; i++){
		if(arr[i] == 1) continue;
		else{
			if(M <= i && i<=N) cout<<i<<endl;
			for(int j=i+i; j<=N; j+=i){
				arr[j] = 1;
			}
		}
	}


	return 0;
}
