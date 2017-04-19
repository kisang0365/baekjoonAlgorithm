/*
 * 2108.cpp
 *
 *  Created on: 2017. 4. 19.
 *      Author: chokisang
 */


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int arr[500000];
int temp[8001] = {0, };

double one(int N){
	double sum = 0;
	for(int i=0; i<N; i++){
		sum +=arr[i];
		temp[arr[i]+4000]++;
	}
	sum/=N;
	return sum;
}

int two(int N){

	sort(arr, arr+N);

	return arr[N/2];
}

int three(int N){
	int max = 0;
	vector<int> v;

	for(int i=0; i<=8000; i++){
		if(temp[i] > max){
			v.clear();
			max = temp[i];
		}
		if(temp[i] == max && max != 0){
			v.push_back(i-4000);
		}
	}

	if(v.size()<=1) return v.at(0);
	else return v.at(1);

}

int four(int N){

	return arr[N-1] - arr[0];

}

int main(){

	int N;
	cin >> N;
	for(int i=0; i<N; i++)
		cin >> arr[i];

	cout<<fixed;
	cout.precision(0);
	cout<<one(N)<<endl;

	cout<<two(N)<<endl;
	cout<<three(N)<<endl;
	cout<<four(N)<<endl;

	return 0;
}

