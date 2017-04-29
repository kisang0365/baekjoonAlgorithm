/*
 * 1676.cpp
 *
 *  Created on: 2017. 4. 29.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int check(int num){

	int count = 0;
	while(num > 0){
		if(num % 5 != 0){
			return count;
		}
		else{
			count++;
			num /= 5;
		}
	}
	return count;
}

int main(){

	int N;
	cin >> N;

	int count = 0;

	for(int i=1; i<=N; i++){
		count += check(i);
	}
	cout<<count<<endl;


	return 0;
}



