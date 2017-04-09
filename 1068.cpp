/*
 * 1068.cpp
 *
 *  Created on: 2017. 4. 9.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;
int N,D; // N<=50
int leafCount = 0;

void dfs(int node){

	int cnt = 0;
	if(node == D){
		v.at(node) = 100;
		return;
	}

	for(int i=0; i<N; i++){
		//node에 자식노드가 있을 때
		if(v.at(i)==node){
			cnt++;
			dfs(i);
		}
	}

	if(cnt == 0)
		leafCount++;
	else{
		//부모노드가 리프노드가 되야 할때
		cnt =0;
		for(int i=0; i<N; i++){
			if(v.at(i) == node) cnt++;
		}
		if(cnt==0) leafCount++;
	}

	return;
}



int main(){


	vector<int> rootCount;
	cin >> N;

	for(int i=0; i<N; i++){
		int a;
		cin >>a;
		v.push_back(a);
	}

	cin >> D;

	for(int i=0; i<N; i++){
		if(v.at(i)==-1)
			rootCount.push_back(i);
	}

	//루트노드들 전부 확인
	for(int i=0; i<rootCount.size(); i++){
		dfs(rootCount.at(i));
	}

	cout<<leafCount<<endl;
	return 0;
}


