/*
 * 1507.cpp
 *
 *  Created on: 2017. 7. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	int A[21][21];
	int check[21][21] = {0, };

	cin >> N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			int num;
			cin >> num;
			A[i][j] = check[i][j] = num;
		}
	}


	for(int k=1; k<=N; k++){

		for(int i=1; i<=N; i++){
			for(int j=1; j<=N; j++){
				if(A[i][j] > A[i][k] + A[k][j]){
					cout<<"-1"<<endl;
					return 0;
				}

				if(i == k || j == k) continue;
				if(A[i][j] == A[i][k] + A[k][j]){
					check[i][j] = 0;
				}
			}
		}

	}

	int ans = 0;
	for(int i=1; i<=N; i++){
		for(int j=i+1; j<=N; j++){
			ans += check[i][j];
		}
	}

	cout<<ans<<endl;
	return 0;
}


