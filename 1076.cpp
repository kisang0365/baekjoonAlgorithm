/*
 * 1076.cpp
 *
 *  Created on: 2017. 4. 12.
 *      Author: chokisang
 */

#include<iostream>
#include<map>
#include<cmath>

using namespace std;

map<string, int> M;

void createMap(){

	M["black"] = 0;
	M["brown"] = 1;
	M["red"] = 2;
	M["orange"] = 3;
	M["yellow"] = 4;
	M["green"] = 5;
	M["blue"] = 6;
	M["violet"] = 7;
	M["grey"] = 8;
	M["white"] = 9;

}


int main(){

	string color[3];

	createMap();

	for(int i=0; i<3; i++){
		cin >> color[i];
	}

	long long int ans;
	ans = (M[color[0]]*10 + M[color[1]]);
	for(int i=0; i<M[color[2]]; i++)
		ans *= 10;

	cout<<ans<<endl;

	return 0;
}


