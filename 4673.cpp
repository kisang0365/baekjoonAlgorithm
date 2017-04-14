/*
 * 4673.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int self(int num){

	int ans = num;

	while(num>0){
		ans += num%10;
		num/=10;
	}
	return ans;
}

int main(){
	int selfNum[10001] = {0, };

	for(int i=1; i<=10000; i++){
		int s = self(i);
		if(s <=10000) selfNum[s] = 1;
	}

	for(int i=1; i<=10000; i++){
		if(selfNum[i]==0) cout<<i<<endl;
	}
	return 0;
}



