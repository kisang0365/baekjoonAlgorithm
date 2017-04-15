/*
 * 10809.cpp
 *
 *  Created on: 2017. 4. 15.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

int main(){

	string s;
	int count[26];
	fill_n(count,26,-1);

	cin >> s;

	for(int i=0; i<s.length(); i++){
		char c = s[i];
		if(count[(int)(c-'a')] == -1) count[(int)(c-'a')] = i;
	}

	for(int i=0; i<26; i++){
		if(count[i] != -1) cout<<count[i]<<" ";
		else cout<<"-1"<<" ";
	}

	return 0;
}




