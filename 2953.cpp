/*
 * 2953.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

struct Winner{
	int score = 0;
	int index=0;
};
Winner w;
const int Person = 5;

int main(){


	for(int i=1; i<=Person; i++){
		int sum = 0;
		for(int j=0; j<Person-1; j++){
			int num;
			cin >> num;
			sum += num;
		}
		if(w.score < sum){
			w.score = sum;
			w.index = i;
		}
	}
	cout<<w.index<<' '<<w.score<<endl;
	return 0;
}

