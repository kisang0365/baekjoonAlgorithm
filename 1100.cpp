/*
 * 1100.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	char ches[8][8];
	int count = 0;

	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin >> ches[i][j];
			if(i%2==0 && j%2 == 0){
				if(ches[i][j] == 'F') count++;
			}
			else if(i%2 == 1 && j%2 == 1){
				if(ches[i][j] == 'F') count++;
			}

		}
	}
	cout<<count<<endl;
	return 0;
}


