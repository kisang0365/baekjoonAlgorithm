/*
 * 11051.cpp
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
	int D[1001][1001];

	for(int i=0; i<=N; i++){

		for(int j=0; j<=min(i,K); j++){
			if(j==0 || j==i) D[i][j] = 1;
			else
				D[i][j] = D[i-1][j] + D[i-1][j-1];
			if(D[i][j] >= 10007) D[i][j] = D[i][j] % 10007;
		}
	}

	cout<<D[N][K] << endl;



	return 0;
}


