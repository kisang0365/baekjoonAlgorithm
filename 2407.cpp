/*
 * 2407.cpp
 *
 *  Created on: 2017. 4. 30.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int n, m;
	cin >> n >> m;
	unsigned long long int D[101][101];
	long long check[101][101];
	long long devide = 10000000000000;

	for(int i=0; i<=n; i++){

		for(int j=0; j <= min(m,i); j++){
			if(j==0 || j==i) D[i][j] = 1;
			else{
				D[i][j] = D[i-1][j] + D[i-1][j-1];
				check[i][j] = check[i-1][j] + check[i-1][j-1];
				if(D[i][j] >= devide){
					check[i][j] = check[i][j] + D[i][j] /devide;
					D[i][j] %= devide;
				}
			}
		}
	}
	if(check[n][m] > 0){
		cout<<check[n][m]; // 1 3
		long long int num = D[n][m];
		while(num >= 1){
			num/=10;
			devide/=10;
		}
		while(devide>1){
			cout<<"0";
			devide/=10;
		}
		cout<<D[n][m];
	}
	else{
		cout<<D[n][m]<<endl;
	}


	return 0;
}

//100_C_50 값이 100891344545564193334812497256 이 값이 나와야합니다
