/*
 * 2133.cpp
 *
 *  Created on: 2017. 6. 15.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int D[31] = {1, 0, 3, };
	int N;
	cin >> N;

	for(int i=3; i<=N; i++){

		if(i%2 == 1) continue;
		else{

			D[i] = D[i-2] * 3;
			for(int j=4; j<=i; j+=2){
				D[i]+= 2*D[i-j];
			}
		}

	}
	cout<<D[N]<<endl;



	return 0;
}

