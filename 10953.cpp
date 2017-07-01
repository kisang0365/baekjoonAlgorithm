/*
 * 10953.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

vector<int> splite(string s){
	vector<int> v;
	int cutAt = s.find_first_of(",");

	while(cutAt != s.npos){

		v.push_back( stoi(s.substr(0,cutAt)));
		s = s.substr(cutAt+1);
		cutAt = s.find_first_of(",");
	}

	if(s.length() > 0){
		v.push_back( stoi(s.substr(0, cutAt)));
	}

	return v;
}


int main(){

	int T;

	cin >> T;

	while(T--){
		string s;
		vector<int> v;
		int sum = 0;
		cin >> s;
		v = splite(s);
		for(int i=0; i<v.size(); i++){
			sum += v.at(i);
		}
		cout<<sum<<endl;
	}


	return 0;
}



