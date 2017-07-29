/*
 * 1789.cpp
 *
 *  Created on: 2017. 7. 28.
 *      Author: chokisang
 */

#include<iostream>
#include<climits>
using namespace std;

int main(){

	long long int S;
	cin >> S;
	long long int sum = 0;
	for(int i=1; i<=INT_MAX; i++){
		sum += i;
		if(sum == S){
			cout<<i<<endl;
			return 0;
		}
		else if(sum > S){
			cout<<i-1<<endl;
			return 0;
		}
	}

	return 0;
}

