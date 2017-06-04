/*
 * 2263.cpp
 *
 *  Created on: 2017. 6. 4.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int in[100000];
int post[100000];
int position[100000];

int n = 0;

void finding(int il, int ir, int pl, int pr){

	//cout<<il<<' '<<ir<<' '<<pl<<' ' <<pr<<endl;
	if(il > ir || pl > pr )
		return;

	int r = post[pr];

	cout<<r<<' ';
	if(pl == pr)
		return;

	int idx = position[r];

	finding(il, idx-1, pl, pl+idx-il-1);
	finding(idx+1, ir, pl+idx-il, pr-1);

}


int main(){

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> in[i];
		position[in[i]] = i;
	}

	for(int i=0; i<n; i++){
		cin >> post[i];
	}

	finding(0, n-1, 0, n-1);

	return 0;
}



