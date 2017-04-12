/*
 * 1032.cpp
 *
 *  Created on: 2017. 4. 12.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

string str[50];

int main(){

	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> str[i];
	}

	for(int j=0; j<str[0].length(); j++){

		bool check = true;
		for(int i=1; i<N; i++){
			if(str[i-1][j] != str[i][j]){
				check = false;
				break;
			}
		}
		if(check) cout<<str[0][j];
		else cout<<"?";
	}

	return 0;
}

