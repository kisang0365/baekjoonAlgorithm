/*
 * 2981.cpp
 *
 *  Created on: 2017. 5. 16.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main(){

	int N;

	int count[101];
	int G=0;
	map<int,int> m;

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> count[i];
	}

	sort(count, count+N);

	int a = count[N-1] - count[0];

	for(int i=1; i*i < a; i++){
		if(a%i == 0){
			if(i > 1) m[i] = i;
			m[a/i] = a/i;
		}
	}

	map<int,int>::iterator iter;
	for(iter=m.begin(); iter!=m.end(); iter++){
		int mod = count[0] % iter->first;
		bool same = true;
		for(int i = 1; i<N; i++){
			if(count[i] % iter->first != mod){
				same = false;
				break;
			}
		}
		if(same == true) cout<<iter->first<<' ';
	}

	return 0;
}




