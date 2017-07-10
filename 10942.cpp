/*
 * test.cpp
 *
 *  Created on: 2017. 7. 10.
 *      Author: chokisang
 */

#include<iostream>
#include<cstdio>

using namespace std;

const int MAXN = 2001;
int number[MAXN];

bool P(int s, int e){

	while(s<=e){
		if(number[s] != number[e]) return false;

		s++;
		e--;
	}
	return true;
}


int main(){

	int N, M;
	cin >> N;


	for(int i=1; i<=N; i++){
		scanf("%d", &number[i]);
	}
	cin >> M;

	for(int i=0; i<M; i++){
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		printf("%d\n", P(n1,n2));
	}


	return 0;
}
