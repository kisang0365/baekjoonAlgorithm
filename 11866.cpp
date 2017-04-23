/*
 * 11866.cpp
 *
 *  Created on: 2017. 4. 23.
 *      Author: chokisang
 */


#include<iostream>
#include<queue>

using namespace std;

int main(){

	queue<int> q;
	int j[1001];
	int N,M;
	cin >> N >> M;

	for(int i=1; i<=N; i++){
		j[i] = i;
	}

	int i=1;
	int count = 0;
	while(q.size() < N){

		if(j[i] > 0){
			count++;
		}

		if(count == M){
			q.push(j[i]);
			j[i] = 0;
			count = 0;
		}

		i++;

		if(i> N){
			i=1;
		}
	}
	cout<<"<";
	while(!q.empty()){
		cout<<q.front();
		if(q.size() > 1) cout<<", ";
		q.pop();
	}
	cout<<">";






	return 0;
}


