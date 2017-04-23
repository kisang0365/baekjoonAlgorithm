/*
 * 9012.cpp
 *
 *  Created on: 2017. 4. 23.
 *      Author: chokisang
 */


#include<iostream>
#include<string>

using namespace std;

int main(){

	int T;
	cin >> T;

	string s;

	while(T--){
		int left = 0, right = 0;
		bool ok = true;

		cin >> s;

		for(int i=0; i<s.length(); i++){
			if(s[i] == '(') left++;
			else right++;

			if(left - right < 0){
				ok = false;
				break;
			}
		}
		if(ok == false || left != right) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}


	return 0;
}
