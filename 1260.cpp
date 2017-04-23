/*
 * 1260.cpp
 *
 *  Created on: 2017. 4. 23.
 *      Author: chokisang
 */


#include<iostream>
#include<queue>
using namespace std;

int N, M;
int g[1001][1001];
int mark[1001];
int bfsMark[1001];
queue<int> q;
queue<int> sub;

void dfs(int start){
	mark[start] = 1;
	q.push(start);

	int t = 1;
	while( t <= N){
		if(g[start][t] == 1 && mark[t] == 0){
			dfs(t);
		}
		t++;
	}
}

void bfs(int start){

	q.push(start);
	sub.push(start);
	bfsMark[start] = 1;

	while(!sub.empty()){
		int v = sub.front();
		sub.pop();
		for(int i=1; i<=N; i++){
			if(g[v][i] == 1 && bfsMark[i] == 0){
				q.push(i);
				sub.push(i);
				bfsMark[i] = 1;
			}
		}
	}
}

void print(){

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}



int main(){

	int V;
	cin >> N >> M >> V;

	for(int i=0; i<M; i++){
		int p1, p2;
		cin >> p1 >>p2;
		g[p1][p2] =1;
		g[p2][p1] =1;
	}
	dfs(V);
	print();

	bfs(V);
	print();

	return 0;
}

