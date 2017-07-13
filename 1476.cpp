/*
 * 1476.cpp
 *
 *  Created on: 2017. 7. 13.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int cnt = 0;
	int E, S , M;
	cin >> E >> S >> M;
	int now;
	while(1){
		now = E+15*cnt;

		int newS = now%28;
		if(newS == 0) newS = 28;
		int newM = now%19;
		if(newM == 0) newM = 19;

		if(newS == S && newM == M) break;

		cnt++;
	}
	cout<<now<<endl;
	return 0;
}


