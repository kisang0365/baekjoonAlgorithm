/*
 * 2193.cpp
 *
 *  Created on: 2017. 3. 28.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	//[배열개수][앞자리]
	int arr[101][2];
	arr[1][0] = 1;
	arr[1][1] = 1;
	for(int i=2; i<=N; i++){
		arr[i][0] = arr[i-1][0] + arr[i-1][1];
		arr[i][1] = arr[i-1][0];
	}

	cout << arr[N][1];
}
