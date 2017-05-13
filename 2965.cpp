/*
 * 2965.cpp
 *
 *  Created on: 2017. 5. 13.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int A, B, C;
	cin >> A >> B >> C;

	int left = A;
	int mid = B;
	int right = C;
	int sum = 0;
	while(left+1 != mid || mid != right-1){
		if(mid-left > right-mid){
			right = mid;
			mid = left+1;
		}
		else{
			left = mid;
			mid = right-1;
		}
		sum++;
	}
	cout<<sum<<endl;
	return 0;
}


