/*
 * 1010.cpp
 *
 *  Created on: 2017. 4. 10.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int NM[31][31];

int sum(int i, int j){

	int s = 0;

	if(i==j) return 1;

	for(int k=1; k<=j-i+1; k++){
		s += NM[i-1][j-k];
	}
	return s;
}


void solution(){
	for(int i=1; i<30; i++){
		for(int j=i; j<30; j++){
			if(i==1) NM[i][j] = j;
			else{
				NM[i][j] = sum(i,j);
			}
		}
	}


}

int main(){

	int T;
	cin >> T;
	solution();
	for(int i=0; i<T; i++){

		int N, M; // 0<N<=M<30
		cin >> N >> M;
		cout<<NM[N][M]<<endl;

	}

	return 0;
}


