/*
 * 11720.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>
#include<string>

using namespace std;

int main(){

	int N; //1<=N<=100
	string s;

	cin >> N;
	cin >> s;

	int sum = 0;

	for(int i=0; i<N; i++){
		sum += (int)s[i] - (int)'0';
	}
	cout<<sum<<endl;
	return 0;
}
