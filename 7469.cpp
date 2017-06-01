/*
 * 7496.cpp
 *
 *  Created on: 2017. 6. 1.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>

using namespace std;

struct Number{
	int idx;
	int value;

	bool operator<(const Number& n) const{
		if(this->value < n.value) return true;
		else
			return false;
	}

};

Number arr[100001];

int main(){

	int n, m;
	cin >> n >> m;


	for(int i=1; i<=n; i++){
		cin >> arr[i].value;
		arr[i].idx = i;
	}

	sort(arr+1, arr+n+1);
	while(m--){

		int i,j,k;
		cin >> i >> j >> k;

		int count = 0;
		for(int a=1; a<=n; a++){
			if(arr[a].idx >= i && arr[a].idx <= j)
				count++;

			if(count==k){
				cout<<arr[a].value<<endl;
				break;
			}
		}
	}

	return 0;
}


