/*
 * 11047.cpp
 *
 *  Created on: 2017. 4. 5.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int cases, goal;

	cin >> cases >> goal;

	int *d = new int[cases];
	for(int i=0; i<cases; i++) cin >> d[i];

	int count = 0;
	bool check = false;
	while(check == false){

		for(int i=cases-1; i>=0; i--){
			if(d[i] < goal) {
				goal -= d[i];
				count ++;
				break;
			}
			else if(d[i] == goal){
				check = true;
				count++;
				break;
			}
		}
	}

	cout<<count<<endl;

	return 0;
}

