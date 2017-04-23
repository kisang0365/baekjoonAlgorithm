/*
 * 1158.cpp
 *
 *  Created on: 2017. 4. 23.
 *      Author: chokisang
 */


#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main(){

	int M, N;
	cin >> N >> M;
	queue<int> q;
	vector<int> v;
	for(int i=1; i<=N; i++)
		v.push_back(i);

	int point = 0;
	while(q.size() < N){
		//M자리 가기
		point += M;

		//point사이즈 오버됬을시 처음으로
		if(point > v.size()){
			point = point%v.size();
		}
		// 포인트가 0이 되면 그위치로 .
		if(point == 0) point = v.size();
		q.push(v.at(point-1));
		v.erase(v.begin()+point-1);
		//한칸씩 뒤로 떙겨주기.
		point--;
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
