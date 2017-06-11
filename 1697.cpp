/*
 * 1697.cpp
 *
 *  Created on: 2017. 6. 11.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
#include<queue>

using namespace std;

int N, K;
int ans = 111111;
int visit[500000] = {0, };
queue<int> q;
queue<int> c;

void enqueue(int num, int cnt){

	q.push(num);
	c.push(cnt);
}

void bfs(int n){

	q.push(n);
	c.push(0);

	while(!q.empty()){

		int now = q.front();
		int cnt = c.front();

		q.pop();
		c.pop();

		visit[now] = 1;

		if(now == K){
			ans = cnt;
			return;
		}

		if(visit[now*2] == 0 && now <= K) enqueue(now*2, cnt+1);
		if(visit[now+1] == 0 && now < K) enqueue(now+1, cnt+1);
		if(visit[now-1] == 0 && now - 1 >= 0) enqueue(now-1, cnt+1);

	}
	ans = 0;
}

int main(){

	cin >> N >> K;

	//수빈이 위치 X , 걸으면 +1 or -1   ,,,   순간이동 -> 2X
	bfs(N);

	cout<<ans<<endl;

	return 0;
}

