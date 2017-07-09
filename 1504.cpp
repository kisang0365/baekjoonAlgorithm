/*
 * 1504.cpp
 *
 *  Created on: 2017. 7. 7.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<climits>
using namespace std;

const int MAX_N = 801;
#define node pair<int, int>

vector<node> v[MAX_N];
int exact[2];
int N, E;

vector<int> dijstra(int s){

	vector<int> dist(N+1, INT_MAX);
	priority_queue<node> pq;

	dist[s] = 0;
	pq.push(make_pair(0, s));

	while(!pq.empty()){

		int cost = pq.top().first;
		int hear = pq.top().second;
		pq.pop();

		if(dist[hear] < cost) continue;

		for(int i=0; i<v[hear].size(); i++){

			int nextCost = cost + v[hear][i].second;
			int there = v[hear][i].first;

			if(dist[there] > nextCost){
				dist[there] = nextCost;
				pq.push(make_pair(nextCost, there));
			}
		}

	}
	return dist;
}



int main(){


	cin >> N >> E;

	for(int i=0; i<E; i++){
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
	}
	cin >> exact[0] >> exact[1];

	vector<int> dap;
	dap = dijstra(1);
	int fs = dap[exact[0]];
	int fe = dap[exact[1]];
	dap = dijstra(exact[0]);
	int se = dap[exact[1]];
	dap = dijstra(N);
	int sn = dap[exact[0]];
	int en = dap[exact[1]];

	int ans = fs+se+en > fe + se + sn ? fe + se + sn : fs + se + en;

	cout<<ans<<endl;

	return 0;
}


