/*
 * radixSort.cpp
 *
 *  Created on: 2017. 6. 14.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>
using namespace std;


int Number[10] = {501,302,22,56,40,90, 100, 105, 202, 7};
int Max = 0;

void radixSort(){

	queue<int> q[10];

	int devide = 1;

	while(Max >= devide){

		for(int i=0; i<10; i++){
			q[(Number[i] / devide)%10].push(Number[i]);
		}

		int count = 0;

		for(int i=0; i<10; i++){
			while(!q[i].empty()){
				Number[count++] = q[i].front();
				q[i].pop();
			}
		}

		for(int i=0; i<10; i++){
			cout<<Number[i]<< ' ';
		}

		cout<<endl;
		devide*=10;
	}

}




int main(){

	for(int i=0; i<10; i++){
		if(Max < Number[i]) Max = Number[i];
	}
	radixSort();
	return 0;
}
