/*
 * 14648.cpp
 *
 *  Created on: 2017. 7. 23.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;


int main(){

	int n,q;
	int A[1001];

	cin >> n >> q;

	for(int i=1; i<=n; i++)
		cin >> A[i];

	for(int i=0; i<q; i++){

		int h;
		cin >> h;

		if(h == 2){
			int a,b,c,d;
			cin >> a >> b >> c >> d;

			int sum = 0;
			for(int j=a; j<=b; j++){
				sum += A[j];
			}
			for(int j=c; j<=d; j++){
				sum -= A[j];
			}
			cout<<sum<<endl;
		}
		else{
			int a, b;
			cin >> a>> b;
			int sum = 0;
			for(int j=a; j<=b; j++){
				sum += A[j];
			}
			cout<<sum<<endl;
			int temp = A[a];
			A[a] = A[b];
			A[b] = temp;
		}
	}

	return 0;
}
