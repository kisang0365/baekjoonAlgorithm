/*
 * 2443.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

void printStar(int N){

	int last = 2*N-1;

	for(int i= 0; i< N; i++){

		for(int j=0; j<last; j++){

			if(j>=i && j <last-i) cout<<'*';
			else if( j < last-i) cout<<' ';
			else break;
		}

		cout<<endl;

	}


}


int main(){

	int N;
	cin >> N;

	printStar(N);

	return 0;
}
