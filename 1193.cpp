/*
 * 1193.cpp
 *
 *  Created on: 2017. 4. 17.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int X;
	int i=1;
	int temp = 1;
	cin >> X;


	while(temp < X){
		i++;
		temp+=i;
	}
	int top, bottom;
	int m = temp - X;
	top = i-m;
	bottom = 1+m;
	//내려가기 .
	if(i%2 == 0)
		cout<<top<<"/"<<bottom<<endl;
	else
		cout<<bottom<<"/"<<top<<endl;

	return 0;
}
