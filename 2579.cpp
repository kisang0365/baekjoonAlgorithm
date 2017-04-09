/*
 * 2579.cpp
 *
 *  Created on: 2017. 4. 8.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int DP[300][2];

void climb(int line, int value[]){

	DP[0][0] = value[0];
	DP[0][1] = 0;
	DP[1][0] = value[1];
	DP[1][1] = DP[0][0] + value[1];

	for(int i=2; i<line; i++){
		DP[i][0] = max(DP[i-2][0], DP[i-2][1])+value[i];
		DP[i][1] = DP[i-1][0] + value[i];
	}

}

int main(){

	int line;

	cin >> line;
	int* value = new int[line];

	for(int i=0; i<line; i++)
		cin >> value[i];

	climb(line, value);
	cout << max(DP[line-1][0], DP[line-1][1])<< endl;

	return 0;
}


