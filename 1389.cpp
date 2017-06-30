/*
 * 1389.cpp
 *
 *  Created on: 2017. 6. 30.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<cstdio>
#include<queue>

using namespace std;

int N, M;
vector<int> v[101];
queue<pair<int, int> > q;
bool visit[101] = {false, };

int bfs(int s, int e){

	q.push(pair<int, int>(s,1));
	fill(visit, visit+N+1, false);

	while(!q.empty()){

		int num = q.front().first;
		int cnt = q.front().second;
		q.pop();

		for(int i=0; i<v[num].size(); i++){

			if(visit[v[num].at(i)] == false){
				q.push(pair<int, int>(v[num].at(i), cnt+1));
				if(v[num].at(i) == e){

					while(!q.empty()){ q.pop();}
					return cnt+1;
				}
			}

		}
	}
	return -1;
}

int main(){

	int Min = 5001;
	int ans = 0;
	cin >> N >> M;


	for(int i=0; i<M; i++){
		int n, f;
		cin >> n >> f;
		v[n].push_back(f);
		v[f].push_back(n);
	}

	for(int i=1; i<=N; i++){
		int sum = 0;
		for(int j=1; j<=N; j++){
			if(i!=j) sum += bfs(i,j);
		}
		if(Min > sum){
			Min = sum;
			ans = i;
		}
	}

	cout<<ans<<endl;

	return 0;
}



