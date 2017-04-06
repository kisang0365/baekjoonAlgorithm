/*
 * 11404.cpp
 *
 *  Created on: 2017. 4. 6.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int bus[101][101];
#define MAX 1000000

int main(){

	int cityCount, busCount;
	cin >> cityCount >> busCount;

	for(int i=1; i<=cityCount; i++){
		for(int j=1; j<=cityCount; j++){
			if(i==j) bus[i][j] = 0;
			else bus[i][j] = MAX;
		}
	}

	for(int i=1; i<=busCount; i++){
		int s, e, v;
		cin >> s >> e >> v;
		if(bus[s][e] > v) bus[s][e] = v;
	}

	for(int k=1; k<=cityCount; k++){
		for(int i=1; i<=cityCount; i++){
			for(int j=1; j<=cityCount; j++){
				if(bus[i][j] > bus[i][k] + bus[k][j]){
					bus[i][j] = bus[i][k]+bus[k][j];
				}
			}
		}
	}

	for(int i=1; i<=cityCount; i++){
		for(int j=1; j<=cityCount; j++){
			if(bus[i][j] == MAX) cout<<"0"<<" ";
			else cout<<bus[i][j]<< " ";
		}
		cout<<endl;
	}


	return 0;
}


