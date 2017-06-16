/*
 * 2294.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

	int n,k;
	vector<int> v;
	cin >> n >> k;

	int coin[10001] = {0, 0};

	//1로 변경.
	for(int i=1; i<=n; i++){
		int c;
		cin >> c;
		v.push_back(c);
	}

	sort(v.begin(), v.end());

	for(int i=0; i<n; i++){

		int c = v.at(i);

		for(int j=c; j<=k; j++){
			if(coin[j-c] > 0 || j-c == 0){
				if(coin[j] == 0)
					coin[j] = coin[j-c] + 1;
				else coin[j] = min(coin[j], coin[j-c] + 1);
			}
		}
	}
	if(coin[k] > 0)	cout<<coin[k]<<endl;
	else cout<<"-1"<<endl;
	return 0;
}


