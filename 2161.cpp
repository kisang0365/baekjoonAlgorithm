/*
 * 2161.cpp
 *
 *  Created on: 2017. 7. 14.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>

using namespace std;

int main(){
	int N;
	queue<int> q;

	cin >> N;

	for(int i=1; i<=N; i++){
		q.push(i);
	}
	int flag = true;
	while(!q.empty()){

		int num = q.front();
		if(flag){
			q.pop();
			cout<<num<<' ';
		}
		else{
			q.pop();
			q.push(num);
		}
		flag = !flag;
	}
	return 0;
}

