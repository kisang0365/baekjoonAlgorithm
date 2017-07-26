/*
 * 10448.cpp
 *
 *  Created on: 2017. 7. 26.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){

	int T;
	cin >> T;

	int num = 0;
	int cnt = 1;
	vector<int> v;

	while(1){
		num = ((cnt)*(cnt+1))/2;
		if(num > 1000) break;

		v.push_back(num);
		cnt++;
	}

	bool Dp[1001] = {false, };

	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v.size(); j++){
			for(int k=0; k<v.size(); k++){
				if(v[i]+v[j]+v[k] <= 1000){
					Dp[v[i]+v[j]+v[k]] = true;
				}
			}
		}
	}

	while(T--){

		int k;
		cin >> k;

		cout<<Dp[k]<<endl;

	}






	return 0;
}


