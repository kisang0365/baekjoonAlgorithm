/*
 * 1475.cpp
 *
 *  Created on: 2017. 4. 17.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int N;
	int arr[9] = {0, };

	cin >> N;

	while(N>0){
		int t = N%10;
		if(t == 9) t = 6;

		arr[t]++;
		N/=10;
	}
	if(arr[6]%2 == 1) arr[6] = arr[6]/2 + 1;
	else arr[6] /=2;
	int max = 0;
	for(int i=0; i<9; i++){
		//cout<<arr[i]<<endl;
		if(max < arr[i]) max = arr[i];
	}
	cout<<max<<endl;

	return 0;
}
