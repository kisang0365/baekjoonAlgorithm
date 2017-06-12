/*
 * 2167.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int arr[301][301];

int main(){

	int N, M;

	cin >> N >> M;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> arr[i][j];
		}
	}

	int T;

	cin >> T;

	while(T--){

		int si, sj, ei, ej;
		cin >> si >> sj >> ei >> ej;

		int sum = 0;
		for(int i=si; i<=ei; i++){
			for(int j=sj; j<=ej; j++){
				sum += arr[i][j];
			}
		}
		cout<<sum<<endl;
	}


	return 0;
}

