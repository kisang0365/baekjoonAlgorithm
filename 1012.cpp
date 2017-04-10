/*
 * 1012.cpp
 *
 *  Created on: 2017. 4. 10.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int V[51][51]; //배추심은
int T[51][51]; //지나간곳 체

void countBug(int row, int col){

	T[row][col] = 1;

	if(V[row+1][col] == 1 && T[row+1][col] == 0){
		countBug(row+1, col);
	}
	if(row-1 >= 0){
		if(V[row-1][col] == 1 && T[row-1][col] == 0){
			countBug(row-1, col);
		}
	}
	if(V[row][col+1] == 1 && T[row][col+1] == 0){
		countBug(row, col+1);
	}
	if(col-1 >= 0){
		if(V[row][col-1] == 1 && T[row][col-1] == 0){
			countBug(row, col-1);
		}
	}
}



int main(){

	int cases;
	cin >> cases;
	for(int k=0; k<cases; k++){
		int row, col, num;
		cin >> row>>col>>num;
		int count = 0;

		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				T[i][j] = 0;
				V[i][j] = 0;
			}
		}

		for(int i=0; i<num; i++){
			int t1,t2;
			cin >> t1 >> t2;
			V[t1][t2] = 1;
		}


		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				if(T[i][j] == 0 && V[i][j] == 1){
					countBug(i,j);
					count++;
				}
			}
		}
		cout<<count<<endl;
	}

	return 0;
}


