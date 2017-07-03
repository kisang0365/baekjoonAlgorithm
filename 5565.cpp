/*
 * 5565.cpp
 *
 *  Created on: 2017. 7. 3.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int sum_Book = 0;

	cin >> sum_Book;

	for(int i=0; i<9; i++){
		int num;
		cin >> num;
		sum_Book -= num;
	}
	cout<<sum_Book<<endl;

	return 0;
}


