/*
 * 2581.cpp
 *
 *  Created on: 2017. 4. 19.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int M, N;
	int prime[10001];
	int sum = 0;
	int min = 100001;

	prime[0] = 1;
	prime[1] = 1;


	cin >> M >> N;

	for(int i=M; i<=N; i++){
		int check = 0;
		for(int q=2; q<=i; q++){
			if(i%q == 0)
				check++;
		}
		if(check == 1){
			sum+=i;
			if(min > i)
				min = i;
		}
	}

	if(sum == 0) cout<<"-1"<<endl;
	else{
		cout<<sum<<endl;
		cout<<min<<endl;
	}

	return 0;
}
