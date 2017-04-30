/*
 * 6591.cpp
 *
 *  Created on: 2017. 4. 30.
 *      Author: chokisang
 */



#include<iostream>
using namespace std;

int main(){

	int n =1 , k=1;
	//n은 2^31 - 1 까지 들어
	while(1){
		cin >> n >> k;
		if(n==0 && k==0) break;

		if(k > n-k) k=n-k;

		long long int ans = 1;

		for(int i=1; i<=k; i++){
				ans*= n--;
				ans /= i;
		}
		cout<<ans<<endl;
	}
	return 0;
}

