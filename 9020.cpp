/*
 * 9020.cpp
 *
 *  Created on: 2017. 4. 20.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

#define MAX 10000
int arr[MAX+1];

void Prime(){

	arr[1] = 1;

	for(int i=2; i<=sqrt(MAX); i++){

		if(arr[i] == 1) continue;
		else{

			for(int j=i+i; j<=MAX; j+=i){
				arr[j] = 1;
			}
		}
	}
}


int main(){

	int T;
	cin >> T;

	Prime();

	while(T--){

		int n;
		cin >> n;

		int minSum = 20001;
		int a,b = 0;

		for(int i=2; i<=n-2; i++){
			if(n-i<i) break;

			if(arr[i] == 0 && arr[n-i] == 0){
				if(minSum > n-i-i){
					minSum = n-i-i;
					a = i;
					b=n-i;
				}
			}
		}
		cout<<a<<" "<<b<<endl;
	}

	return 0;
}


