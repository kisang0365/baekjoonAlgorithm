/*
 * 2884.cpp
 *
 *  Created on: 2017. 7. 31.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int H, M;
	const int fast = 45;

	cin >> H >> M;

	if(M >= fast){
		M -= fast;
	}
	else{
		M = M + 60 - fast;
		H = H-1;
		if(H < 0) H = 23;
	}

	cout<<H << ' '<<M<<endl;

	return 0;
}


