/*
 * 1094.cpp
 *
 *  Created on: 2017. 3. 25.
 *      Author: chokisang
 */

#include <iostream>
using namespace std;

int main() {

	int c=0;
	int x;
	cin >> x;

	while(x){
		if(x%2 == 1) c++;
		x /=2;
	}
	cout << c;

	return 0;
}
