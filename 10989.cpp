/*
 * 10989.cpp
 *
 *  Created on: 2017. 4. 17.
 *      Author: chokisang
 */

#include<stdio.h>

int main(){

	int arr[10001] = {0,};
	int temp;
	long long int N;
	int max = 0;

	scanf("%lld",&N);

	for(int i=0; i<N; i++){
		scanf("%d",&temp);
		if(max < temp) max = temp;
		arr[temp]++;
	}

	for(int i=0; i<=max; i++){
		while(arr[i]>0){
			printf("%d\n", i);
			arr[i]--;
		}
	}

	return 0;
}
