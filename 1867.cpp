/*
 * 1867.cpp
 *
 *  Created on: 2017. 7. 23.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> adj[501];
int A[501] = {0, };
int B[501] = {0, };
int visit[501] = {0, };
int N, K;
int ans = 0;
int vcnt = 0;

int dfs(int cur){

	if(visit[cur] == vcnt) return 0;

	visit[cur] = vcnt;

	for(int i=0; i<adj[cur].size(); i++){
		int next = adj[cur][i];
		//next값을 연결할수있거나 옮겨서 연결할수 있는지 확인.
		if(!B[next] || dfs(B[next])){
			cout<<cur<<" ---> "<<next<<endl;
			B[next] = cur;
			A[cur] = next;

			return 1;
		}
	}

	return 0;
}

int main(){

	cin >> N >> K;

	for(int i=0; i<K; i++){
		int r,c;
		cin >> r >> c;
		adj[r].push_back(c);

	}

	for(int i=1; i<=N; i++){
		vcnt++;
		ans += dfs(i);
	}
	cout<<ans<<endl;
}


