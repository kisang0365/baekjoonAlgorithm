/*
 * 2309.cpp
 *
 *  Created on: 2017. 4. 8.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>

using namespace std;

#define TOTAL 100
#define NUM 9

int main(){
	int key[9];
	int total = 0;
	for(int i=0; i< NUM; i++){
		cin >> key[i];
		total += key[i];
	}

	sort(key, key+NUM);

	for(int i=0; i< NUM; i++){
		bool ok = false;
		for(int j=i+1; j< NUM; j++){
				if(total-key[i]-key[j] == TOTAL){
					key[i] = 0;
					key[j] = 0;
					ok = true;
					break;
				}
			}
		if(ok == true) break;
	}

	for(int i=0; i<NUM; i++)
		if(key[i] != 0) cout<<key[i]<<endl;

	return 0;
}

