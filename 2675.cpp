/*
 * 2675.cpp
 *
 *  Created on: 2017. 4. 15.
 *      Author: chokisang
 */


#include<iostream>
#include<string>

using namespace std;

int main(){

	int T;
	string arr[1001];
	cin >> T;

	for(int cases = 0; cases<T; cases++){
		int R;
		string s;
		string temp = "";
		cin >> R >> s;

		for(int i=0; i<s.length(); i++){
			for(int j=0; j<R; j++){
				temp+=s[i];
			}
		}
		arr[cases] = temp;
	}

	for(int i=0; i<T; i++)
		cout<<arr[i]<<endl;





	return 0;
}
