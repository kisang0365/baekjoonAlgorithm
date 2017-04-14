/*
 * 8958.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */


#include<iostream>
#include<string>

using namespace std;

int main(){

	int T;
	string s;

	cin >> T;

	while(T--){
		cin>>s;
		int sum = 0;
		int add = 0;
		for(int i=0; i<s.length(); i++){
			if(s.at(i) == 'O') add++;
			else add = 0;

			sum+= add;
		}
		cout<<sum<<endl;
	}

	return 0;
}
