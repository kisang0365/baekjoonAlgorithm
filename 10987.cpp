/*
 * 10987.cpp
 *
 *  Created on: 2017. 7. 31.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
using namespace std;

int main(){

	string s;
	int ans = 0;
	cin >> s;

	for(int i=0; i<s.length(); i++){

		if(s[i] == 'a' || s[i] == 'e' || s[i] =='i' || s[i] == 'o' || s[i] == 'u')
			ans++;
	}
	cout<<ans<<endl;


	return 0;
}

