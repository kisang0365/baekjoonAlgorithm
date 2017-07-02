/*
 * 7567.cpp
 *
 *  Created on: 2017. 7. 2.
 *      Author: chokisang
 */

#include<iostream>
#include<cstring>
using namespace std;

int main(){

	string s;

	cin >> s;

	bool first = false;
	bool second = false;
	int sum = 0;

	for(int i=0; i<s.length(); i++){
		if(s.at(i) == '('){
			second = false;
			if(first == false){

				first = true;
				sum += 10;
			}
			else{
				sum += 5;
			}
		}
		else if(s.at(i) == ')'){
			first = false;
			if(second == false){
				second = true;
				sum += 10;
			}
			else{
				sum += 5;
			}
		}
	}

	cout<<sum<<endl;
	return 0;
}


