/*
 * 7568.cpp
 *
 *  Created on: 2017. 6. 7.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

struct D{
	int w;
	int h;
};



int main(){

	int N;
	cin >> N;

	D d[51];

	for(int i=0; i<N; i++)
		cin >> d[i].w >> d[i].h ;

	for(int i=0; i<N; i++){
		int count = 1;
		for(int j=0; j<N; j++){
			if(i!=j){

				if(d[i].w < d[j].w && d[i].h < d[j].h){
					count++;
				}

			}
		}
		cout<<count<<' ';
	}


	return 0;
}


