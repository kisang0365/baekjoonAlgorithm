/*
 * 14646.cpp
 *
 *  Created on: 2017. 7. 23.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int ans = 0;
	int now = 0;
	int M[100001] = {0, };
	for(int i=0; i<2*N; i++){
		int f;
		cin >> f;

		if(M[f] == 0){
			now++;
			M[f] = 1;
			if(now> ans) ans++;
		}
		else{
			M[f] = 0;
			now--;
		}
	}
	cout<<ans<<endl;


	return 0;
}


