/*
 * 1920.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */

#include <stdio.h>
#include<algorithm>

using namespace std;

int arr[100001];
int n;

bool bsearch(int num){
	int start = 0;
	int last = n-1;
	int mid = n/2;

	while(start <= last){
		if(arr[mid] == num){
			return true;
		}
		else{
			if(arr[mid] > num){
				last = mid-1;
				mid = (start+last)/2;
			}else{
				start = mid+1;
				mid = (last+start)/2;
			}
		}
	}
	return false;
}


int main(){


	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	sort(arr, arr+n);

	int m;
	scanf("%d", &m);

	for(int i=0; i<m; i++){
		int num;
		scanf("%d", &num);
		if(bsearch(num)) printf("1\n");
		else printf("0\n");

	}

	return 0;
}


