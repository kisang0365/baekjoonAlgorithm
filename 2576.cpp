/*
 * 2576.cpp
 *
 *  Created on: 2017. 7. 2.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main(){

	vector<int> v;

	for(int i=0; i<7; i++){
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end(), greater<int>());

	int ans = -1;
	int sum = 0;
	for(int i=0; i<v.size(); i++){
		if(v[i] % 2 == 1){
			ans = v[i];
			sum += ans;
		}
	}
	if(ans == -1) cout<<ans<<endl;
	else{
		cout<<sum<<endl<<ans<<endl;
	}

}



