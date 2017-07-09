/*
 * 1238.cpp
 *
 *  Created on: 2017. 7. 6.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

//X번 마을에 모여서 파티, 근데 길이 다 단방향,
// M개의 길, N명, 그리고 N명의 학생들 중 가장 많은 시간을 소비하는 학생.

vector< pair<int, int> > v[1001];
int N, M, X;

bool operator<(pair<int, int> a, pair<int, int> b){
	return a.second > b.second;
}


vector<int> dijgstra(int s){

	priority_queue< pair<int, int> > pq;
	vector<int> dist(N+1, INT_MAX);

	dist[s] = 0;
	pq.push(make_pair(0, s));

	while(!pq.empty()){

		int cost = -pq.top().first;
		int hear = pq.top().second;
		pq.pop();

		if(dist[hear] < cost){
			continue;
		}

		for(int i=0; i<v[hear].size(); i++){

			int there = v[hear][i].first;
			int nextCost = cost + v[hear][i].second;
			if(dist[there] > nextCost){
				dist[there] = nextCost;
				pq.push(make_pair(-nextCost, there));
			}
		}
	}
	return dist;
}


int main(){


	cin >> N >> M >> X;

	for(int i=0; i<M; i++){
		int s,e,value;
		cin >> s >> e >> value;

		v[s].push_back(make_pair(e,value));
	}

	vector<int> come = dijgstra(X);
	int Max = 0;
	for(int i=1; i<=N; i++){
		if(i != X) {
			vector<int> go = dijgstra(i);
			if(Max < go[X] + come[i]) Max = go[X] + come[i];
		}
	}

	cout<<Max<<endl;


}


