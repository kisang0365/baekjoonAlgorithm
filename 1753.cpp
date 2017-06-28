/*
 * 1753.cpp
 *
 *  Created on: 2017. 6. 28.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

const int INFI = 3000000;

int main(){

	int V, E;
	int K;

	cin >> V >> E >> K;

	int dist[20001];
	vector<pair<int,int> > adj[20001];

	fill(dist, dist+V+1, INFI);

	for(int i=0; i<E; i++){
		int u,v,w;
		cin >> u >> v >> w;
		adj[u].push_back(pair<int, int>(v, w));
	}

	dist[K] = 0;

	priority_queue<pair<int, int> > q;
	q.push(pair<int, int>(K,0));

	while(!q.empty()){
		int start = q.top().first;
		int cost = q.top().second;
		q.pop();

		for(int i=0; i<adj[start].size(); i++){
			int end = adj[start][i].first;
			int endcost = cost + adj[start][i].second;

			if(endcost < dist[end]){
				dist[end] = endcost;
				q.push(pair<int,int>(end, endcost));
			}
		}
	}

	for(int i=1; i<=V; i++){
		if(dist[i] == INFI) cout<<"INF"<<endl;
		else cout<<dist[i]<<endl;
	}

	return 0;
}


