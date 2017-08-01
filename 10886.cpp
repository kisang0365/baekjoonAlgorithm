/*
 * 10886.cpp
 *
 *  Created on: 2017. 7. 30.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int good = 0;
	int bad = 0;

	for(int i=0; i<N; i++){
		int a;
		cin >> a;
		if(a) good++;
		else bad++;
	}

	if(good < bad) cout<<"Junhee is not cute!";
	else cout<<"Junhee is cute!";

	return 0;
}


