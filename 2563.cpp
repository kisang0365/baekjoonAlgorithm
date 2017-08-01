/*
 * 2563.cpp
 *
 *  Created on: 2017. 7. 30.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int Board[101][101] = {0, };

	for(int i=0; i<N; i++){

		int x, y;
		cin >> x >> y;

		for(int a = x; a<x+10; a++){
			for(int b = y; b<y+10; b++){
				Board[a][b] = 1;
			}
		}
	}
	int ans = 0;
	for(int i=0; i<101; i++){
		for(int j=1; j<101; j++){
			if(Board[i][j] == 1) ans++;
		}
	}
	cout<<ans<<endl;

	return 0;
}

