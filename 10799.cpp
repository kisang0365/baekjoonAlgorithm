/*
 * 10799.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

int main(){

	string s;
	cin >> s;
	int sum = 0;
	int cnt = 0;

	for(int i=0; i<s.length(); i++){

		if(s[i] == '('){
			cnt++;
		}
		else {
			if(s[i-1] == '('){
				cnt--;
				sum += cnt;
			}
			else{
				cnt--;
				sum += 1;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}


