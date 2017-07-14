/*
 * 10610.cpp
 *
 *  Created on: 2017. 7. 14.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;

int main(){

	bool zero = false;
	int arr[100001];
	string s;
	cin >> s;

	int num = 0;
	for(int i=0; i<s.length(); i++){
		arr[i] = (int)(s[i]-'0');
		num += arr[i];
		if(arr[i] == 0) zero = true;
	}

	if(num%3 == 0 && zero == true){
		sort(arr, arr+s.length(), greater<int>());
		for(int i=0; i<s.length(); i++)
			cout<<arr[i];
	}
	else{
		cout<<"-1";
	}

	return 0;
}



