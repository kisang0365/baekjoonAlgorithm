/*
 * 1547.cpp
 *
 *  Created on: 2017. 5. 18.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int cases;
	cin >> cases;
	int arr[3] = {1, 0, 0};

	while(cases--){
		int X, Y;
		cin >> X >> Y;

		int temp = arr[X-1];
		arr[X-1] = arr[Y-1];
		arr[Y-1] = temp;

	}

	for(int i=0; i<3; i++){
		if(arr[i] == 1){
			cout<<i+1<<endl;
			break;
		}
		if(i==2) cout<<"-1"<<endl;
	}



	return 0;
}



