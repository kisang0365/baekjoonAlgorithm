/*
 * 5567.cpp
 *
 *  Created on: 2017. 7. 23.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>

using namespace std;

vector<int> adj[501];
bool visit[501] = {false, };
int cnt = 0;

void find(int f){

	for(auto next : adj[f]){

		if(!visit[next]){
			cnt++;
			visit[next] = true;
		}
	}
}


int main(){

	int N, K;
	cin >> N >> K;

	for(int i=0; i<K; i++){
		int n1, n2;
		cin >> n1 >> n2;

		adj[n1].push_back(n2);
		adj[n2].push_back(n1);

	}
	visit[1] = true;
	for(auto f : adj[1]){

		if(!visit[f]){
			visit[f] = true;
			cnt++;
		}
		find(f);
	}

	cout<<cnt<<endl;
	return 0;
}


