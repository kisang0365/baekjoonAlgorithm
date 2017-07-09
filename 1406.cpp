/*
 * 1406.cpp
 *
 *  Created on: 2017. 7. 7.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
#include<list>
using namespace std;

int main(){

	string str;
	int command;

	list<char> console;
	list<char>::iterator iter = console.end();

	cin >> str;
	cin >> command;

	for(int i=0; i<str.length(); i++){
		console.insert(iter, str[i]);
	}

	for(int i=0; i<command; i++){

		char c;
		cin >> c;
		if(c == 'P'){

			char addC;
			cin >> addC;
			console.insert(iter, addC);
		}
		else{

			if(c == 'L'){
				if(iter!= console.begin()) --iter;
			}
			else if(c == 'D'){
				 if(iter != console.end()) ++iter;
			}
			else if(c == 'B'){

				if(iter != console.begin()){
					--iter;
				}
				else
					continue;
				iter = console.erase(iter);

			}

		}
	}

	for(iter=console.begin() ; iter != console.end(); ++iter){
		cout<<*iter;
	}

	return 0;
}


