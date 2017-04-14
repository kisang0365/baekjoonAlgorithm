/*
 * 2448.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */


#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int a[3073][6200];

void basic(){

	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
			a[i][j] = 0;
			if(i==2) a[i][j] = 1;
		}
	}
	a[0][2] = 1;
	a[1][1] = 1;
	a[1][3] = 1;
}

void addPoint(int N, int k){

	int beforeLast = 5*(N/3)+(N/3-1);

	int**temp = new int*[N];
	for(int i=0; i<N; i++)
		temp[i] = new int[beforeLast];

	//교체
	for(int i=0; i<N; i++){
		for(int j=0; j<beforeLast; j++){
			temp[i][j] = a[i][j];
			a[i][j] = 0;
		}
	}
	//윗라인 옮기기
	for(int i=0; i<N; i++){
			for(int j=0; j<beforeLast; j++){
				a[i][j+beforeLast/2+1] = temp[i][j];
			}
		}

	for(int i=0; i<N; i++){
		for(int j=0; j<beforeLast; j++){
			a[i+N][j] = temp[i][j];
			a[i+N][j+beforeLast+1] = temp[i][j];
		}
	}
	for(int i=0; i<N; i++)
		delete[] temp[i];
	delete[] temp;

}


int main(){

	int N; //N = 3*2^k (3,6, 12, 24, 48)
	cin >> N;

	basic();

	int k=0;
	int tempN = 3*pow(2,k);

	while(tempN != N){
		addPoint(tempN, k);
		k++;
		tempN*=2;
	}

	int last = 5*(N/3)+(N/3-1);

	for(int i=0; i<N; i++){
		for(int j=0; j<last; j++){
			if(a[i][j] == 1) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}
