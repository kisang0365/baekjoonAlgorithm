/*
 * 11724.cpp
 *
 *  Created on: 2017. 7. 11.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;

int N, M;
vector<int> v[1001];
bool visit[1001]= {false,};
int ans = 0;
void BFS(int root){

	queue<int> q;
	visit[root] = false;
	q.push(root);

	while(!q.empty()){

		int n = q.front();
		q.pop();

		for(int i=0; i<v[n].size(); i++){
			int next = v[n][i];
			if(visit[next] == false){
				q.push(next);
				visit[next] = true;
			}
		}
	}
	ans++;
}

int main(){


	cin >> N >> M;
	int s, e;
	for(int i=0; i<M; i++){
		scanf("%d %d", &s, &e);
		v[s].push_back(e);
		v[e].push_back(s);
	}

	for(int i=1; i<=N; i++){

		if(!visit[i]){
			BFS(i);
		}

	}
	cout<<ans<<endl;
	return 0;
}


