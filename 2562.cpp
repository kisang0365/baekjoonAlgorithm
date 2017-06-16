/*
 * 2562.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

struct Number{

	int num;
	int index;
};

const int MaxCount = 9;

bool cmp_Number(Number a, Number b){
	return a.num < b.num;
}


int main(){

	Number number[MaxCount];

	for(int i=0; i<MaxCount; i++){
		cin >> number[i].num;
		number[i].index = i+1;
	}

	sort(number, number+MaxCount, cmp_Number);

	cout<<number[MaxCount-1].num<<endl<<number[MaxCount-1].index<<endl;


	return 0;
}

