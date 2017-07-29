/*
 * 2985.cpp
 *
 *  Created on: 2017. 7. 28.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

void print(int n1, int n2, int n3, char a, char b){
	cout<<n1<<a<<n2<<b<<n3;
}

void find(int n1, int n2, int n3){

	if(n1+n2 == n3)
		print(n1,n2,n3, '+', '=');
	else if(n1-n2 == n3)
		print(n1,n2,n3, '-', '=');
	else if(n1*n2 == n3)
		print(n1,n2,n3, '*', '=');
	else if(n1/n2 == n3)
		print(n1,n2,n3, '/', '=');
	else if(n1 == n2+n3)
		print(n1,n2,n3, '=', '+');
	else if(n1 == n2-n3)
		print(n1,n2,n3, '=', '-');
	else if(n1 == n2*n3)
		print(n1,n2,n3, '=', '*');
	else if(n1 == n2/n3)
		print(n1,n2,n3, '=', '/');
}




int main(){

	int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	find(n1,n2,n3);

	return 0;
}


