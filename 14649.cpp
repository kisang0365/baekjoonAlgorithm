/*
 * 14649.cpp
 *
 *  Created on: 2017. 7. 23.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	double money;
	cin >> money;

	int Rock[101] = {0, };

	int N;
	cin >> N;

	for(int i=0; i<N; i++){
		int number;
		char d;

		cin >> number >> d;

		if(d == 'R'){
			for(int a=number+1; a<=100; a++){
				Rock[a]++;
			}
		}
		else{
			for(int a=number-1; a>=0; a--){
				Rock[a]++;
			}
		}
	}
	int n1 = 0, n2 = 0, n3 = 0;
	for(int i=1; i<=100; i++){
		if(Rock[i]%3 == 0){
			n1++;
		}
		else if(Rock[i]%3 == 1){
			n2++;
		}
		else{
			n3++;
		}
	}
	cout<<fixed;
	cout.precision(2);

	int z = n1+n2+n3;
	cout<<(money/z)*n1<<endl<<(money/z)*n2<<endl<<(money/z)*n3<<endl;


	return 0;
}


