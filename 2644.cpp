/*
 * 2644.cpp
 *
 *  Created on: 2017. 7. 24.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> v[101];


int bfs(int s, int e){

	queue<int> q;
	int visit[101];
	fill(visit, visit+101, 0);

	q.push(s);
	visit[s] = 0;

	while(!q.empty()){

		int p = q.front();
		q.pop();

		for(auto next : v[p]){

			if(visit[next] == 0){

				visit[next] = visit[p] + 1;

				if(next == e) return visit[next];

				q.push(next);
			}
		}
	}
	return -1;

}


int main(){

	int n;
	int r1, r2;
	int m;
	cin >> n >> r1 >> r2 >> m;

	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	cout<<bfs(r1,r2)<<endl;

	return 0;
}


