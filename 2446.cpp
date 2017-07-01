/*
 * 2446.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

void makeStar(int N){

	for(int i=0; i<N; i++){
		for(int j=0; j<2*N-1; j++){
			if(j>=i && j<2*N-1-i){
				cout<<"*";
			}
			else if(j<2*N-1-i)cout<<" ";
		}
		cout<<endl;
	}
	for(int i=N-2; i>=0; i--){
		for(int j=0; j<2*N-1; j++){
			if(j>=i && j<2*N-1-i)
				cout<<"*";
			else if(j<2*N-1-i)cout<<" ";
		}
		cout<<endl;
	}
	return;
}


int main(){
	int N;
	cin >> N;

	makeStar(N);

	return 0;
}

