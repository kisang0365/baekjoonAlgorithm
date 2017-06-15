/*
 * 2667.cpp
 *
 *  Created on: 2017. 6. 15.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
using namespace std;

int N;
int countNum = 0;
int M[26][26];
int visit[26][26];
int cnt[26] = {0,};

const int ax[4] = {1, -1, 0, 0};
const int ay[4] = {0, 0, 1, -1};

void checking(int x, int y, int countNum){

	visit[x][y] = countNum;
	cnt[countNum]++;

	for(int i = 0; i< 4; i++){
		int newX = x+ax[i];
		int newY = y+ay[i];

		if(0<=newX && newX<N && 0<=newY && newY<N){
			if(visit[newX][newY] == 0 && M[newX][newY] == 1) checking(newX, newY, countNum);
		}

	}

	return;
}

void making(){

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(M[i][j] == 1 && visit[i][j] == 0){
				checking(i, j, ++countNum);
			}
		}
	}
}

int main(){

	cin >> N;
	//init
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			char c;
			cin >> c;
			M[i][j] = c - '0';
			visit[i][j] = 0;
		}
	}

	making();

	cout<<countNum<<endl;
	sort(cnt, cnt+1+countNum);
	for(int i=1; i<=countNum; i++){
		cout<<cnt[i]<<endl;
	}


	return 0;
}


