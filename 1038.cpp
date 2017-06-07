/*
 * 1038.cpp
 *
 *  Created on: 2017. 6. 7.
 *      Author: chokisang
 */


#include<iostream>
#include<cmath>
using namespace std;

int N;
long long int now = 0;
int counts = 0;

void check(int start, int cnt, long long int num){

	num += start*pow(10,cnt-1);

	if(cnt == 1 && start>=0){
		counts++;
		now = num;
		return;
	}

	if(cnt >= 2 && start == 0){
		return;
	}


	for(int i=0; i<start; i++){
		check(i, cnt-1, num);
		if(counts == N) return;
	}

}


int main(){

	cin >> N;
	int cnt = 0;

	while(N != counts){
		cnt++;
		if(cnt > 10) break;
		for(int i=1; i<=9; i++){
			check(i, cnt, 0);
			if(counts == N) break;
		}
	}
	if(cnt > 10) cout<<"-1"<<endl;
	else cout<<now<<endl;


	return 0;
}
