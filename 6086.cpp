#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#include<cmath>
using namespace std;

const int MAX = 54;



int charToInt(char c){
	if(c <= 'Z') return c-'A';
	else
		return c-'a'+26;
}

int main(){

	int N;
	int f[MAX][MAX] = {0, };
	int c[MAX][MAX] = {0, };
	vector<int> obj[MAX];

	cin >> N;

	for(int i=0; i<N; i++){
		char s,e;
		int w;
		cin >> s >> e >> w;

		s = charToInt(s);
		e = charToInt(e);

		c[s][e] += w;

		obj[s].push_back(e);
		obj[e].push_back(s);

	}

	int total = 0;
	int S = charToInt('A');
	int E = charToInt('Z');

	while(1){

		int v[MAX];
		fill(v, v+MAX, -1);

		queue<int> q;
		q.push(S);

		while(!q.empty()){

			int st = q.front();
			q.pop();

			for(int next : obj[st]){

				if(v[next] == -1 && c[st][next] - f[st][next] > 0){
					q.push(next);
					v[next] = st;
					if(next == E) break;
				}
			}
		}

		if(v[E] == -1) break;

		int flow = 999999999;
		//min값 찾기.
		for(int i=E; i!=S; i=v[i]){
			flow = min(flow, c[v[i]][i] - f[v[i]][i]);
		}

		for(int i=E; i!=S; i=v[i]){
			f[v[i]][i] += flow;
			f[i][v[i]] -= flow;
		}

		total += flow;
	}

	cout<<total<<endl;

	return 0;
}
