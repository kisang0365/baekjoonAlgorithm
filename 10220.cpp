/*
 * 10220.cpp
 *
 *  Created on: 2017. 6. 5.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

long long int cnt = 0;

int N;

int main(){

	int T;
	cin >> T;

	vector<int> v;

	while(T--){
		cnt = 0;
		cin >> N;
		int ans = 0;

		if( N <= 3 || N == 6) ans=0;
		else if( N == 4) ans = 2;
		else ans = 1;

		cout<<ans<<endl;
	}


	return 0;

}

