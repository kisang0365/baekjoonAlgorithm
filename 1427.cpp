/*
 * 1427.cpp
 *
 *  Created on: 2017. 4. 19.
 *      Author: chokisang
 */


#include<iostream>
#include<set>

using namespace std;

int main(){

	int N;
	cin >> N;

	multiset<int> s;
	while(N>0){
		s.insert(N%10);
		N /= 10;
	}

	multiset<int>::reverse_iterator iter;
	for(iter = s.rbegin(); iter != s.rend(); iter++){
		cout<<*iter;
	}



	return 0;
}
