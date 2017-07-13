/*
 * 1652.cpp
 *
 *  Created on: 2017. 7. 13.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	char Room[101][101];

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> Room[i][j];
		}
	}

	//row
	int rowCnt = 0, colCnt = 0;

	for(int i=0; i<N; i++){
		int s = 0;
		for(int j=0; j<N; j++){
			if(Room[i][j] == '.') s++;
			else{
				if(s >=2 ){
					rowCnt++;
				}
				s = 0;
			}

			if(j == N-1){
				if( s>= 2){
					rowCnt++;
				}
			}
		}
	}

	for(int j=0; j<N; j++){
		int s = 0;
		for(int i=0; i<N; i++){
			if(Room[i][j] == '.') s++;
			else{
				if(s >=2 ){
					colCnt++;
				}
				s = 0;
			}

			if(i == N-1){
				if( s>= 2){
					colCnt++;
				}
			}
		}
	}
	cout<<rowCnt<<' '<<colCnt<<endl;
	return 0;
}

