/*
 * chessboard.cpp
 *
 *  Created on: 2017. 6. 15.
 *      Author: chokisang
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool Board[16][16];
bool win = false;

void init(){

	for(int i=0; i<16; i++)
		for(int j=0; j<16; j++)
			Board[i][j] = false;
}


void chess(int x, int y){

	x%=4;
	y%=4;
	if( (y==0) || (y==3) || (x == 0) || (x== 3) ) win = true;
	else win = false;

	return;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */



	int T;
	cin >> T;

	while(T--){
		int x, y;
		cin >> x >> y;

		init();
		chess(x,y);

		if(win) cout<<"First"<<endl;
		else cout<<"Second"<<endl;

	}

	return 0;
}



