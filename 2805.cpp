/*
 * 2805.cpp
 *
 *  Created on: 2017. 7. 3.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main(){

	long long int N, M;
	cin >> N >> M;

	vector<long long int> v;
	v.push_back(0);
	for(long long int i=0; i<N; i++){
		long long int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end(), greater<int>());

	long long int n;
	long long int total = 0;
	for(n=1; n<v.size(); n++){
		total = total + (v[n-1] - v[n]) * n;
		if(total >= M || n == v.size() - 1) {
			break;
		}
	}
	long long int MaxH;

	MaxH = v[n] + (total - M)/n;

	cout<<MaxH<<endl;

	return 0;
}


