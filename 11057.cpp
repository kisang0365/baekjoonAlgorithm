/*
 * 11057.cpp
 *
 *  Created on: 2017. 6. 26.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	//D는 맨앞이 i인 수.
	int D[10] = {1,1,1,1,1,1,1,1,1,1 };

	for(int i=2; i<=N; i++){
		for(int j=9; j>=0; j--){

			for(int k=0; k<j; k++){
				D[j] += D[k];
			}
			if(D[j] > 100007) D[j] = D[j] % 100007;
		}
	}
	int sum = 0;
	for(int i=0; i<=9; i++){
		sum += D[i];
		sum = sum % 100007;
	}
	cout<<sum<<endl;

	return 0;
}


