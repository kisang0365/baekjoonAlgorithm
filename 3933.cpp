/*
 * 3933.cpp
 *
 *  Created on: 2017. 7. 30.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int powNumber[40000];
int N, answer;
int cnt = 0;

void combi(int depth, int idx, int sum){

	if(sum > N || depth > 4) return;

	if(sum == N)
		answer++;

	for(int next=idx; next<cnt; next++)
		combi(depth+1, next, sum+powNumber[next]);

}

int main(){

	while(1){
		cin >> N;

		if(N == 0) return 0;

		cnt = 0;

		for(int i=0; i<=N; i++){
			powNumber[i] = 0;
		}

		for(int i=1; i*i<=N; i++)
			powNumber[cnt++] = i*i;

		answer = 0;

		combi(0,0,0);

		cout<<answer<<endl;

	}
}

