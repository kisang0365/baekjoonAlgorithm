/*
 * 1051.cpp
 *
 *  Created on: 2017. 7. 5.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<int> v[51];

bool check(int sx, int sy, int N){
	if(v[sx][sy] == v[sx+N-1][sy] && v[sx][sy+N-1] == v[sx][sy] && v[sx][sy] == v[sx+N-1][sy+N-1])
		return true;
	else return false;
}


int main(){

	int N,M;
	cin >> N >> M;

	int maxH;
	bool minN;
	if(N < M){
		maxH = N;
		minN = true;
	}
	else{
		maxH = M;
		minN = false;
	}

	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			char c;
			cin >> c;
			v[i].push_back(c-'0');
		}
	}
	bool ok = false;
	for(int a = maxH; a>=1; a--){

		for(int i=0; i+a-1<N; i++){
			for(int j=0; j+a-1<M; j++){
				if(check(i,j,a) == true){
					ok = true;
					break;
				}
			}
		}

		if(ok == true){
			cout<<a*a<<endl;
			break;
		}
	}

	return 0;
}


