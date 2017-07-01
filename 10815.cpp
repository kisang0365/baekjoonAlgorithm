/*
 * 10815.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

vector<int> have;

int search(int n){

	int head = 0;
	int rear = have.size()-1;

	while(head<=rear){

		int mid = (head+rear)/2;

		if(have.at(mid) == n){
			return 1;
		}
		else if(have.at(mid) < n){
			head = mid+1;
		}
		else{
			rear = mid-1;
		}
	}
	return 0;
}


int main(){

	//가진 숫자 객수  <500,000
	int N, M;

	cin >> N;
	for(int i=0; i<N; i++){
		int num;
		scanf("%d", &num);
		have.push_back(num);
	}

	sort(have.begin(), have.end());
	cin >> M;
	for(int i=0; i<M; i++){
		int num;
		scanf("%d", &num);
		printf("%d ", search(num));
	}
	return 0;
}


