/*
 * 1946.cpp
 *
 *  Created on: 2017. 7. 29.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
using namespace std;

int main(){

	int T;
	cin >> T;

	while(T--){

		int N;
		cin >> N;

		int Arr[100001];

		for(int i=0; i<N; i++){
			int n1, n2;
			cin >> n1 >> n2;
			Arr[n1] = n2;
		}

		int min = Arr[1];
		int sum = 1;
		for(int i=2; i<=N; i++){
			if(min > Arr[i]){
				min = Arr[i];
				sum++;
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}



