/*
 * 1931.cpp
 *
 *  Created on: 2017. 6. 18.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
using namespace std;

struct Con{
	int s;
	int e;
};

bool comp(Con a, Con b){
	if(a.e < b.e) return true;
	else if(a.e == b.e){
		if( a.s < b.s) return true;
		else return false;
	}
	else return false;
}

int main(){

	int n;
	cin >> n;
	Con con[100001];

	for(int i=0; i<n; i++){
		cin >> con[i].s >> con[i].e;
	}

	sort(con, con+n, comp);

	int end = con[0].e;
	int cnt = 1;

	for(int i=1; i<n; i++){
		if(end <=con[i].s){
			cnt++;
			end = con[i].e;
		}
	}
	cout<<cnt<<endl;

	return 0;
}


