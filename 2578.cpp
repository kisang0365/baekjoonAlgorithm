/*
 * 2578.cpp
 *
 *  Created on: 2017. 7. 4.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

const int BoardSize = 5;

int main(){

	int board[BoardSize][BoardSize];

	for(int i=0; i<BoardSize; i++)
		for(int j=0; j<BoardSize; j++)
			cin >> board[i][j];

	int bingoRow[BoardSize] = {0, };
	int bingoCol[BoardSize] = {0, };
	int rightD = 0;
	int leftD = 0;

	int number;
	int cnt = 0;
	for(int i=1; i<=BoardSize*BoardSize; i++){
		cin >> number;
		for(int a=0; a<BoardSize; a++){
			for(int b=0; b<BoardSize; b++){
				if(board[a][b] == number){
					bingoRow[a]++;
					bingoCol[b]++;
					if(a==b){
						rightD++;
						if(rightD == BoardSize) cnt++;
					}
					if(b==BoardSize-a-1){
						leftD++;
						if(leftD == BoardSize) cnt++;
					}
					if(bingoRow[a] == BoardSize) cnt++;
					if(bingoCol[b] == BoardSize) cnt++;
					break;
				}
			}
		}
		if(cnt>=3){
			cout<<i<<endl;
			break;
		}
	}


	return 0;
}


