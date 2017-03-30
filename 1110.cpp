/*
 * 1110.cpp
 *
 *  Created on: 2017. 3. 28.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int cycle(int N, int x){
	int count = 1;
	int n = ((x%10)*10) + (((x%10) + x/10)%10);

	if(n == N) return count;
	else count = cycle(N, n);

	return count+1;
}



int main(void){

	int N;

	cin >> N;

	cout << cycle(N, N) << endl;

	return 0;
}


