/*
 * 1759.cpp
 *
 *  Created on: 2017. 7. 28.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int L, C;
char al[16];

void find(int idx, string str){

	if(str.length() == L){

		bool ok1 = false;
		int ok2 = 0;
		for(int i=0; i<L; i++){
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
				ok1 = true;
			}
			else{
				ok2++;
			}
		}
		if(ok1 && ok2>=2) cout<<str<<endl;
		return;
	}

	for(int i=idx; i<C; i++){
		find(i+1, str+al[i]);
	}

}

int main(){

	cin >> L >> C;
	for(int i=0; i<C; i++)
		cin >> al[i];

	sort(al, al+C);

	find(0, "");
	return 0;
}


