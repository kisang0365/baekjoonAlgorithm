/*
 * 2188.cpp
 *
 *  Created on: 2017. 6. 22.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int Cow[201];
int House[201];
vector<int> cowPick[201];
bool visit[201];

bool network_flow(int a){

	visit[a] = true;

	for(int i : cowPick[a]){

		if(House[i] == -1 || ( !visit[House[i]] && network_flow(House[i]) ) ){
			Cow[a] = i;
			House[i] = a;
			return true;
		}
	}
	return false;
}


int main(){

	//N은 소  M은 축사.
	int N, M;
	cin >> N >> M;

	//소들이 원하는 집 입력.
	for(int i=0; i<N; i++){
		int want;
		cin >> want;
		for(int j=0; j<want; j++){
			int wantNum;
			cin >> wantNum;
			cowPick[i].push_back(wantNum-1);
		}
	}

	int match = 0;
	//초기값 -1
	fill(Cow, Cow+N, -1);
	fill(House, House+M, -1);
	//네트워크 플로우 시행.
	for(int i=0; i<N; i++){
		if(Cow[i] == -1){
			fill(visit, visit+N, false);
			if(network_flow(i))
				match++;
		}
	}

	cout<<match<<endl;

	return 0;
}


