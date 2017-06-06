/*
 * 1977.cpp
 *
 *  Created on: 2017. 6. 5.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>

using namespace std;

int main(){

	int M, N;
	cin >> M >> N;

	int start = sqrt(M);
	int min=0;
	int sum = 0;


	for(int i=M; i<=N; i++){

		if(start*start < i){
			start++;
		}
		else if(start* start == i){

			if(sum == 0) min = i;

			sum+= i;

			start++;

		}


	}
	if(sum==0) cout<<"-1"<<endl;
	else cout<<sum<<endl<<min<<endl;


	return 0;
}


