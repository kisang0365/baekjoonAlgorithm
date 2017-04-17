/*
 * 6064.cpp
 *
 *  Created on: 2017. 4. 17.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int T;
	cin >> T;

	while(T--){

		int M,N,x,y;
		cin >> M >> N >> x >> y;
		int i =0;
		int num = M*i+x;
		while(1){
			int tempy = num%N;
			if(tempy == 0) tempy = N;
			if(tempy == y){
				cout<<num<<endl;
				break;
			}
			i++;
			num = M*i+x;
			if( num >= M*N ){
				cout<<"-1"<<endl;
				break;
			}
		}

	}


	return 0;
}
