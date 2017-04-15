/*
 * 2941.cpp
 *
 *  Created on: 2017. 4. 15.
 *      Author: chokisang
 */


#include<iostream>
#include<string>
using namespace std;

int main(){

	string s;
	cin >> s;

	string cro[8]={"c=", "c-", "dz=", "d-","lj","nj","s=","z="};

	int count = 0;

	for(int i=0; i<8; i++){
		for(int j=0; j<=(int)(s.length()-cro[i].length()); j++){
			string sub = s.substr(j,cro[i].length());
			if(sub == cro[i]){
				count++;
				s.replace(j, cro[i].length(), "");
			}
		}
	}
	cout<<count+s.length()<<endl;
	return 0;
}





