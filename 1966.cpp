/*
 * 1966.cpp
 *
 *  Created on: 2017. 4. 23.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;


int main(){

	int T;
	cin >> T;

	while(T--){

		int import[101];
		int mark[101];
		vector<int> v;
		int N,M;
		cin >> M >> N;
		//중요도 넣기
		for(int i=0; i<M; i++){
			cin >> import[i];
			mark[i] = 0;
			v.push_back(import[i]);
		}
		sort(v.begin(), v.end(), greater<int>());

		int count = 0;
		int i = 0;
		bool find = false;
		while(!find){
			if(v.at(0) == import[i] && mark[i] == 0){
				mark[i] = 1;
				count++;
				v.erase(v.begin());
				if(i==N){
					cout<<count<<endl;
					find=true;
				}
			}
			i++;
			if(i == M) i=0;
		}
		v.clear();
	}



	return 0;
}
