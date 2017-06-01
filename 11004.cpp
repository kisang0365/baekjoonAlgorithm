/*
 * 11004.cpp
 *
 *  Created on: 2017. 5. 31.
 *      Author: chokisang
 */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int arr[5000001];


void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

int p(int left, int right){

	int pivot = (left+right)/2;
	int pivotValue = arr[pivot];

	swap(arr[right], arr[pivot]);

	int idx = left;

	for(int i=left; i<right; i++){
		if(arr[i] < pivotValue){
			swap(arr[i], arr[idx]);
			idx++;
		}
	}
	swap(arr[idx], arr[right]);

	return idx;
}

void find(int left, int right, int k){
	if(left<= right){
		int pivot = p(left, right);
		if(k<pivot) find(left, pivot-1,k);
		else if(k > pivot) find(pivot+1, right,k);
		else cout<<arr[k]<<endl;
	}
}

int main(){

	int N, k;
	cin >> N >> k;


	for(int i=1; i<=N; i++){
		scanf("%d", &arr[i]);
	}

	find(1, N, k);



	return 0;
}


