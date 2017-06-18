/*
 * 2583.cpp
 *
 *  Created on: 2017. 6. 18.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int M[101][101];
int R, C, K;

const int ax[4] = {1, -1, 0 , 0};
const int ay[4] = {0, 0, 1, -1};

int dfs(int i, int j, int count){

	M[i][j] = 1;

	for(int a=0; a<4; a++){
		int newI = i + ax[a];
		int newJ = j + ay[a];

		if(0<=newI && newI< R && 0<=newJ && newJ < C){
			if(M[newI][newJ] == 0){
				count = dfs(newI, newJ, count+1);
			}
		}
	}

	return count;
}




int main(){

	vector<int> v;
	cin >> R >> C >> K;

	for(int i=0; i<K; i++){
		int sx, sy, ex, ey;
		cin >> sy >> sx >> ey >> ex;

		for(int j=sx; j<ex; j++){
			for(int k=sy; k<ey; k++){
				if(M[j][k] != 1) M[j][k] = 1;
			}
		}
	}

	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			if(M[i][j] == 0) v.push_back(dfs(i,j,1));
		}
	}

	sort(v.begin(), v.end());
	cout<<v.size()<<endl;
	for(int i=0; i<v.size(); i++)
		cout<<v.at(i)<<' ';

	return 0;
}

