/*
 * 2588.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

void cal(int n1, int n2){

	int sum = 0;
	for(int i=0; i<3; i++){
		int num = n1*(n2%10);
		cout<<num<<endl;
		sum += n1*(n2%10)*(pow(10,i));
		n2 /= 10;
	}
	cout<<sum<<endl;
	return;
}


int main(){

	int n1,n2;
	cin >> n1 >> n2;

	cal(n1,n2);

	return 0;
}


