/*
 * 6359.cpp
 *
 *  Created on: 2017. 6. 27.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int T;
	cin >> T;

	while(T--){
		int n;
		cin >> n;


		bool room[101] = {false, };
		int ans = 0;

		for(int i=1; i<=n; i++){

			for(int j=1; i*j<=n; j++){
				room[i*j] = !room[i*j];
			}
			if(room[i]) ans++;
		}

		cout<<ans<<endl;
	}
	return 0;
}

