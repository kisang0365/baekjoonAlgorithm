/*
 * 1182.cpp
 *
 *  Created on: 2017. 7. 2.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
using namespace std;

vector<int> v;
int N, S;
int ans = 0;

void dfs(int i, int sum){

	sum += v.at(i);

	if(sum == S){
		ans++;
	}

	for(int s=i+1; s<N; s++){
		dfs(s, sum);
	}

	return;
}


int main(){


	cin >> N >> S;

	for(int i=0; i<N; i++){
		int num;
		cin >> num;
		v.push_back(num);
	}

	for(int i=0; i<N; i++){
		dfs(i,0);
	}

	cout<<ans<<endl;

	return 0;
}


