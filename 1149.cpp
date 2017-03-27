/*
 * 1149.cpp
 *
 *  Created on: 2017. 3. 27.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>

using namespace std;

int main(void){

	int N;
	cin >> N;
	int R=0, G=1, B=2;
	int RGB[3][1001];

	for(int i=0; i<N; i++)
		cin >> RGB[R][i] >> RGB[G][i] >> RGB[B][i];

	for(int i=1; i<N; i++){

		RGB[R][i] = min(RGB[G][i-1], RGB[B][i-1]) + RGB[R][i];
		RGB[G][i] = min(RGB[R][i-1], RGB[B][i-1]) + RGB[G][i];
		RGB[B][i] = min(RGB[R][i-1], RGB[G][i-1]) + RGB[B][i];
	}

	cout<<min(min(RGB[R][N-1], RGB[G][N-1]), RGB[B][N-1])<<endl;

	return 0;
}
