/*
 * 11718.cpp
 *
 *  Created on: 2017. 3. 25.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

int main(void){

	string str ="";

	while(1){

		getline(cin,str);
		if(!str.compare("\0") ) break;
		cout<<str<<endl;
	}
}


