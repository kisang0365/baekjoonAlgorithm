/*
 * 10250.cpp
 *
 *  Created on: 2017. 4. 17.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int T;
	cin >>T;

	while(T--){

		int H,W,N;
		cin >> H >> W >> N;

		//몇층.
		int floor = (N-1)%H + 1;
		cout<<floor;

		int roomNumber = (N-1)/H +1 ;

		if(roomNumber<=9) cout<<"0";
		cout<<roomNumber<<endl;


	}



	return 0;
}
