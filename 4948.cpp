/*
 * 4948.cpp
 *
 *  Created on: 2017. 4. 20.
 *      Author: chokisang
 */


#include<iostream>
#include<cmath>
using namespace std;

#define MAX 123456*2
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

	int n;
	cin >> n;

	Prime();

	while(n!=0){

		int count =0;
		for(int i=n+1; i<=2*n; i++){
			if(arr[i] == 0) count++;
		}
		cout<<count<<endl;

		cin >> n;
	}



	return 0;
}
