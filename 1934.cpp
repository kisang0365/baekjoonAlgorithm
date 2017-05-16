/*
 * 1934.cpp
 *
 *  Created on: 2017. 5. 16.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int A, B;
		cin >> A >> B;

		if(A > B){
			int temp = A;
			A = B;
			B = temp;
		}

		for(int i=1; i<=A; i++){
			if( (B*i)%A == 0 ){
				cout<<B*i<<endl;
				break;
			}
		}

	}
	return 0;
}


