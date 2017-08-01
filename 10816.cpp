/*
 * 10816.cpp
 *
 *  Created on: 2017. 7. 31.
 *      Author: chokisang
 */


#include<iostream>
#include<map>
#include<cstdio>
using namespace std;

int main(){

	int N;
	scanf("%d", &N);
	map<int, int> m;
	map<int, int>::iterator iter;

	for(int i=0; i<N; i++){
		int n;
		scanf("%d", &n);
		iter = m.find(n);
		if(iter == m.end()){
			m.insert(make_pair(n, 1));
		}
		else{
			iter->second++;
		}
	}

	int M;
	scanf("%d", &M);

	for(int i=0; i<M; i++){
		int n;
		int ans;
		scanf("%d", &n);
		iter = m.find(n);
		if(iter == m.end()){
			ans = 0;
		}
		else{
			ans = iter->second;
		}
		printf("%d ", ans);
	}

	return 0;
}

