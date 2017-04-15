/*
 * 1316.cpp
 *
 *  Created on: 2017. 4. 15.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int N;
	int count = 0;
	cin >> N;
	while(N--){

		string s;
		cin >> s;
		int al[26];
		fill_n(al,26,1);

		char n = s[0];
		al[(int)(n-'a')] = 0;

		bool g = true;

		for(int i=1; i<s.length(); i++){
			if(s[i-1] != s[i]){
				n = s[i];
				if(al[(int)(n-'a')] == 0) g = false;
				else
					al[(int)(n-'a')] = 0;
			}
			if(g == false) break;
		}
		if(g == true) count++;
	}
	cout<<count<<endl;

	return 0;
}
