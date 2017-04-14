/*
 * 4344.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	double C,N;
	double A[1000];
	cin >> C;
	for(int q=0; q<C; q++){
		double avg = 0;
		double count = 0;

		cin >> N;
		for(int i=0; i<N; i++){
			cin >> A[i];
			avg += A[i];
		}
		//나눠주기.
		avg/=N;
		for(int i=0; i<N; i++){
			if(A[i] > avg) count++;
		}
		double ans = (count/N)*100;
		cout<<fixed;
		cout.precision(3);
		cout<<ans<<"%"<<endl;
	}
	return 0;
}
