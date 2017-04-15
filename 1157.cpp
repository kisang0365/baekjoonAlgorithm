/*
 * 1157.cpp
 *
 *  Created on: 2017. 4. 15.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

int main(){

	string s;
	getline(cin, s);

	int alpabet[26] = {0,};

	for(int i=0; i<s.length(); i++){
		if(s[i] != ' '){
			if(s[i]<'a') alpabet[(int)(s[i]-'A')]++;
			else alpabet[(int)(s[i]-'a')]++;
		}
	}

	int max = 0;
	int a = -1;
	int count = 0;
	for(int i=0; i<26; i++){
		if(max == alpabet[i]) count++;

		if( max < alpabet[i]){
			max = alpabet[i];
			a = i;
			count=0;
		}
	}

	if(count != 0) cout<<"?"<<endl;
	else cout<<(char)( a +'A');

	return 0;
}




