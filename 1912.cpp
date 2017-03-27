/*
 * 1912.cpp
 *
 *  Created on: 2017. 3. 27.
 *      Author: chokisang
 */
#include<iostream>

using namespace std;

int main(void){

	int n;
	int max;
	cin >> n;
	int* num = new int[n];
	int* t = new int[n];
	for(int i=0; i<n ; i++){
		cin >> num[i];
	}
	//초기 0
	t[0] = num[0];
	max = num[0];
	for(int i=1; i<n; i++){

		if(t[i-1] + num[i] > num[i]){
			t[i] = t[i-1]+num[i];
		}
		else{
			t[i] = num[i];
		}
	}
	for(int i=0; i<n; i++){
		if(t[i] > max) max = t[i];
	}
	cout << max;
	return 0;
}
