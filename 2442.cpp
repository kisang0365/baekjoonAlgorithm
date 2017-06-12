/*
 * 2442.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

void printStar(int N){

	int last = 2*N-1;
	int mid = last/2;


	for(int i=0; i<N; i++){

		for(int j=0; j<last; j++){

			if(mid-i <= j && j <= mid+i){
				cout<<'*';
			}
			else if(j < mid-i ) cout<<' ';

		}
		if(i < N-1) cout<<endl;
	}

}


int main(){

	int N;
	cin >> N;
	//별 첫째줄 1개 2째줄 3개, N번쨰 2N-1개

	//초기화
	printStar(N);


	return 0;
}


