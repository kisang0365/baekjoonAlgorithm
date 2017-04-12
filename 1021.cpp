/*
 * 1021.cpp
 *
 *  Created on: 2017. 4. 12.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int N,M; //큐 크기N , 수의개수M M<=N
	cin >> N >> M;
	int point[51];

	int nowPoint = 1;
	int count = 0;

	for(int i=1; i<=M; i++){
		cin >> point[i];
	}

	for(int i=1; i<=M; i++){

		int b = max(nowPoint,point[i]);
		int s = min(nowPoint, point[i]);

		int one = b-s;
		int two = s+N-b;
		int value = min(one,two);
		nowPoint = point[i];
		for(int j=i+1; j<=M; j++){
			if(point[j] > nowPoint) point[j] -=1;
		}
		if(nowPoint == N) nowPoint = 1;
		//한개 빼줌
		N= N-1;
		count+=value;
	}

	cout<<count<<endl;

	return 0;
}



