/*
 * 2751.cpp
 *
 *  Created on: 2017. 4. 17.
 *      Author: chokisang
 */

#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}


int main(){

	int arr[1000000];
	int N;
	scanf("%d",&N);

	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}

	qsort(arr, N, sizeof(int), cmpfunc);

	for(int i=0; i<N; i++){
	   	printf("%d\n",arr[i]);
	}

	return 0;
}
