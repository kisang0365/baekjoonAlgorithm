/*
 * 1016.cpp
 *
 *  Created on: 2017. 4. 11.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;

//프라임 넘버들 저장.
//max-min 이 10^6
long long nono[1000001];

void P(long long int Min, long long int Max){

	for(long long int i=2; i*i<=Max; i++){

		long long x = Min/(i*i);
		if(Min%(i*i) != 0) x++;

		while(x*(i*i) <= Max){
			nono[x*i*i - Min] = 1;
			x++;
		}
	}

}

int main(){

	long long int Min,Max;
	int count = 0;
	cin >> Min >> Max;

	P(Min, Max);

	for(int i=0; i<=Max-Min; i++){
		if(nono[i] == 0){
			count++;
		}
	}
	cout<<count<<endl;

	return 0;
}


