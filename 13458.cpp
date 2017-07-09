/*
 * 13458.cpp
 *
 *  Created on: 2017. 7. 9.
 *      Author: chokisang
 */


#include<iostream>
#include<set>
using namespace std;

int main(){

	int N, B, C;
	multiset<int> s;
	multiset<int>::reverse_iterator iter;
	cin >> N;

	for(int i=0; i<N; i++){
		int n;
		cin >> n;
		s.insert(n);
	}

	cin >> B >> C;
	int cnt = 0;

	for(iter = s.rbegin(); iter != s.rend(); iter++){
		cnt++;
		if(*iter > B){
			int n = *iter-B;
			cnt += n/C+1;
			if(n%C == 0) cnt -=1;
		}
	}
	cout<<cnt<<endl;
}

