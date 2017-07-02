/*
 * 1550.cpp
 *
 *  Created on: 2017. 7. 2.
 *      Author: chokisang
 */

#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int translate(string s){
	int ans = 0;

	for(int i=s.length()-1; i>=0; i--){
		int p = 0;
		if(s[i] >= 'A' && s[i] <='F'){
			p = s[i]-'A'+10;
		}
		else{
			p = s[i] - '0';
		}
		ans += p*pow(16, s.length()-1-i);
	}
	return ans;
}



int main(){
	string s;
	cin >> s;
	cout<<translate(s)<<endl;



}


