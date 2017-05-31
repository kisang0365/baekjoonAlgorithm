/*
 * 1780.cpp
 *
 *  Created on: 2017. 5. 31.
 *      Author: chokisang
 */

#include<iostream>
using namespace std;

int arr[2500][2500];
int ans[3] = {0, 0, 0};

bool check(int rs, int re, int cs, int ce){

	int num = arr[rs][cs];
	for(int i=rs; i<=re; i++){
		for(int j=cs; j<=ce; j++){
			if(num!=arr[i][j]) return false;
		}
	}
	return true;
}

void devide(int rs, int re, int cs, int ce){

	int rm = (re-rs+1)/3;
	int cm = (ce-cs+1)/3;

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int ts = rs+rm*i;
			int te = rs+rm*(i+1)-1;
			int qs = cs+cm*j;
			int qe = cs+cm*(j+1)-1;
			if(check(ts,te,qs,qe)){
				ans[arr[ts][qs]+1]++;
			}
			else{
				devide(ts,te,qs,qe);
			}
		}
	}
}

int main(){

	int N;
	cin >> N;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin >> arr[i][j];
		}
	}
	if(!check(1, N, 1, N)){
		devide(1, N, 1,N);
		for(int i=0; i<3; i++){
			cout<<ans[i]<<endl;
		}

	}
	else{
		cout<<arr[1][1]<<endl;
	}

	return 0;
}



