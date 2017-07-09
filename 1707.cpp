/*
 * 1707.cpp
 *
 *  Created on: 2017. 7. 7.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

const int MAX_N = 20001;


bool bfs(int V, vector<int> v[MAX_N]){

	int first = 1;
	int visit[MAX_N];
	fill(visit, visit+MAX_N, -1);

	visit[first] = 0;

	queue<int> q;
	q.push(first);
	int cnt = 1;

	while(!q.empty()){

		int num = q.front();
		q.pop();

		for(int i=0; i<v[num].size(); i++){
			if(visit[v[num][i]] == -1){
				visit[v[num][i]] = (visit[num]+1)%2;
				q.push(v[num][i]);
				cnt++;
			}
			else{
				if(visit[v[num][i]] == visit[num])
					return false;
			}
		}

		if(q.empty()){
			if(cnt < V){
				for(int i=1; i<=V; i++){
					if(visit[i] == -1){
						visit[i] = 0;
						q.push(i);
						cnt++;
						break;
					}
				}
			}
		}
	}
	return true;
}

int main(){

	int T;
	cin >> T;
	while(T--){

		int V, E;
		cin >> V >> E;

		vector<int> v[MAX_N];
		for(int i=0; i<E; i++){
			int s, e;
			cin >> s >> e;
			v[s].push_back(e);
			v[e].push_back(s);
		}
		if(bfs(V, v) == false){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}


}


