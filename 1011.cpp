/*
 * 1011.cpp
 *
 *  Created on: 2017. 4. 12.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int T;
	cin >> T;
	for(int i=0; i<T; i++){

		int x, y;

		cin >> x >> y;

		//초기 1 마지막 1 중간 최대찍고 --해야함.
		int length = y-x;
		int a = 1;
		int count = 0;
		//3 / 2 = 1;
		while(length > 0){

			length-=a;
			count++;
			if(length <= 0) break;
			length-=a;
			count++;
			a++;

		}
		cout<<count<<endl;

	}

	return 0;
}


