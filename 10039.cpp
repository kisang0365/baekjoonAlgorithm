/*
 * 10039.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int point;
	int sum = 0;
	for(int i=0; i<5; i++){
		cin>>point;
		if(point < 40) point = 40;
		sum+=point;
	}
	cout<<sum/5<<endl;


	return 0;
}


