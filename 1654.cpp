/*
 * 1654.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include<iostream>
using namespace std;

int main(){

	int K, N;
	//N은 필요 랜선 개수, K 는 가진 랜선 갯수
	long long int left = 0;
	long long int right = 1000000000000;
	long long int result = 0;
	long long int maxNum = 0;

	cin >> K >> N;

	long long int Ran[10001];

	for(int i=0; i<K; i++){
		cin >> Ran[i];
	}

	while(left <= right){

		long long mid = (left + right) / 2;
		result = 0;

		for(int i=0; i<K; i++){
			result += Ran[i]/mid;
		}

		if(result >= N){
			left = mid+1;
			if(mid > maxNum)
				maxNum = mid;
		}
		else
			right = mid-1;

	}

	cout<<maxNum<<endl;

	return 0;
}
//K == N 일떄 가장 작은 수. N == K+1 일떄 가장큰수 /2 ;
// 5~ 2K 나누기 2 한것중ㅈ 가장 큰것.

