/*
 * 2231.cpp
 *
 *  Created on: 2017. 6. 6.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int temp = N;
	int count = 0;
	while(temp > 0){
		count++;
		temp/=10;
	}

	int start = N-(count+1)*9;
	if(start < 0) start = 0;

	bool find = false;
	for(int i=start; i< N+(count+1)*9; i++){
		int num = i;
		int sum = num;
		while(num > 0){
			sum+=num%10;
			num/=10;
		}
		if(sum == N){
			cout<<i<<endl;
			find = true;
			break;

		}
	}
	if(find==false) cout<<"0"<<endl;


	return 0;
}

