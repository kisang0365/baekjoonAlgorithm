/*
 * 1546.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	double max = 0;
	double ans = 0;

	double grade[1000];
	for(int i=0; i<N; i++){
		cin >> grade[i];
		if(grade[i] > max) max = grade[i];
	}
	for(int i=0; i<N; i++){
		ans += (grade[i]/max)*100;
	}
	ans /=N;
	cout << fixed;
	cout.precision(2);
	cout<<ans<<endl;


	return 0;
}
