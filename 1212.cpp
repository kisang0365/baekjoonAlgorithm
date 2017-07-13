/*
 * 1212.cpp
 *
 *  Created on: 2017. 7. 13.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

string print(int n, bool head){

	if(head){

		if(n==0) return "0";
		string ans = "";
		while(n >= 2){
			ans = to_string(n%2) + ans;
			n/=2;
		}
		if(n!=0) ans = to_string(n) + ans;
		return ans;

	}
	else{
		string ans = "";
		while(n >= 2){
			ans = to_string(n%2) + ans;
			n/=2;
		}
		if(n!=0) ans = to_string(n) + ans;
		while(ans.length() < 3){
			ans = to_string(0)+ans;
		}
		return ans;
	}

}



int main(){

	string s;

	cin >> s;

	int num = (int)(s[0]-'0');

	cout<<print(num, true);

	for(int i=1; i < s.length(); i++){
		num = (int)(s[i]-'0');
		cout<<print(num, false);
	}

	return 0;
}


