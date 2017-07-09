/*
 * 1916.cpp
 *
 *  Created on: 2017. 7. 6.
 *      Author: chokisang
 */

#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

vector< pair<int, int> > bus[1001];
bool visit[1001] = {false, };
int Min = 1000000000;
int n, m; //도시, 버스
int goal[2];

int dijkstra(int s, int e){

	vector<int> dist(n+1, INT_MAX);

	priority_queue<pair<int, int > > pq;

	pq.push(make_pair(s, 0));

	while(!pq.empty()){

		int hear = pq.top().first;
		int cost = -pq.top().second;
		pq.pop();

		if(dist[hear] < cost){
			continue;
		}

		for(int i=0; i<bus[hear].size(); i++){

			int there = bus[hear][i].first;
			int nextDist = cost + bus[hear][i].second;

			if(dist[there] > nextDist){
				dist[there] = nextDist;
				pq.push(make_pair(there, -nextDist));
			}
		}
	}
	return dist[e];
}


int main(){

	//cin >> n >> m;
	scanf("%d %d", &n, &m);

	for(int i=0; i<m; i++){
		int s, e, value;
		scanf("%d %d %d", &s, &e, &value);
		//cin >> s >> e >> value;
		bus[s].push_back(make_pair(e,value));
	}
	scanf("%d %d", &goal[0], &goal[1]);

	cout<<dijkstra(goal[0],goal[1])<<endl;


	return 0;
}


