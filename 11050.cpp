/*
 * 11050.cpp
 *
 *  Created on: 2017. 4. 27.
 *      Author: chokisang
 */


#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int N, K;

	cin >> N >> K;

	int M[11][11];

	for(int i=0; i<=N; i++){
		for(int j=0; j<=min(i,K); j++){
			if(j==0 || j==i) M[i][j] = 1;
			else
				M[i][j] = M[i-1][j-1] + M[i-1][j];
		}
	}
	cout<<M[N][K]<<endl;
	return 0;
}

//5 2   4 1 or 4 2    3 2 or 3 1  2 2
