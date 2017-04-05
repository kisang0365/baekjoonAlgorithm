/*
 * test.cpp
 *
 *  Created on: 2017. 4. 3.
 *      Author: chokisang
 */
#include<iostream>
#include <vector>             // vector 사용 위해 필요
#include <algorithm>          // sort 사용 위해 필요

using namespace std;

int main() {
	int m, k;
	vector<int> v;
	int sum=0, temp = 0;


	cin >> m;

	for(int i=0; i< m; i++){
		cin >> k;
		v.push_back(k);
	}

	sort(v.begin(), v.end());

	 for(int i=0; i< m; i++){
		 temp = temp + v.at(i);
		 sum += temp;
	 }
	 cout<<sum<<endl;

}

