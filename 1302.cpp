/*
 * 1302.cpp
 *
 *  Created on: 2017. 7. 28.
 *      Author: chokisang
 */


#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

	int N;
	cin >> N;
	int Max = 1;
	map<string, int> m;

	map<string, int>::iterator iter;

	for(int i=0; i<N; i++){
		string n;
		cin >> n;
		if(m.find(n) != m.end()){
			m.find(n)->second++;
			if(Max < m.find(n)->second) Max = m.find(n)->second;
		}
		else{
			m.insert(pair<string, int>(n, 1));
		}
	}

	for(iter = m.begin(); iter != m.end(); iter++){
		if(iter->second == Max){
			cout<<iter->first<<endl;
			break;
		}
	}
	return 0;
}

