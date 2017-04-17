/*
 * 2775.cpp
 *
 *  Created on: 2017. 4. 17.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;

	int arr[15][15];

	for(int i=1; i<=14; i++){
		arr[0][i] = i;
	}
	for(int i=1; i<=14; i++){
		int temp = 0;
		for(int j=1; j<=14; j++){
			temp += arr[i-1][j];
			arr[i][j] = temp;
		}
	}

	while(T--){
		int k,n;
		cin >> k >> n;

		cout<<arr[k][n]<<endl;


	}

	return 0;
}

