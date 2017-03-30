/*
 * 1009.cpp
 *
 *  Created on: 2017. 3. 27.
 *      Author: chokisang
 */


#include<iostream>
#include<cmath>

using namespace std;

int main(void){

	int cases;
	int a, b;
	cin >> cases;

	for(int i=0 ; i< cases; i++){
		int c = 1;
		cin >> a >> b;
		a = a%10;
		for(int j=0; j<b; j++){
			c = c*a ;
			c = c%10;
		}
		if(c == 0 ) c = 10;
		cout << c <<endl;
	 }

	return 0;
}
