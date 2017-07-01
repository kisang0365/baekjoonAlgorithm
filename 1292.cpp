/*
 * 1292.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int A,B;
	cin >> A >> B;

	int D[1001] = {0, };
	int start = 1, end = 1;

	for(int i=1; i<=1000; i++){
		D[i] =  D[i-1] + i;
		//cout<<i<<' '<<D[i]<<endl;
		if(D[i] >= B){
			end = i;
			break;
		}
	}

	for(int i=end; i>=0; i--){
		if(D[i] < A){
			start = i;
			break;
		}
	}

	int sum = 0;

	while(start < end-1){
		if(D[start] < A){
			sum += (D[start+1]-A + 1) * (start+1);
		}
		else{
			sum += (start+1)*(start+1);
		}

		//cout<<start<< ' '<<sum<<endl;
		start++;
	}
	if(start == end-1){
		if(A > D[start])
			sum+=(B-A+1)*(start+1);
		else
			sum += (B-D[start]) * (start+1);
	}

	cout<<sum<<endl;

	return 0;
}


