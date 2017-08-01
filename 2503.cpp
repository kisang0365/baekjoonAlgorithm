/*
 * 2503.cpp
 *
 *  Created on: 2017. 7. 30.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int T;
	cin >> T;
	int call[101][3];
	int S[101];
	int B[101];

	for(int i=0; i<T; i++){

		for(int j=0; j<3; j++){
			char c;
			cin >> c;

			call[i][j] = c - '0';
		}
		cin >> S[i] >> B[i];
	}
	int ans = 0;
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			for(int k=1; k<=9; k++){
				bool ok = true;
				if(i!=j && j!= k && i != k){

					for(int a=0; a<T; a++){

						int s = 0;
						int b = 0;
						if( call[a][0] == i) s++;
						if( call[a][1] == j) s++;
						if( call[a][2] == k) s++;

						if(call[a][1] == i || call[a][2] == i) b++;
						if(call[a][0] == j || call[a][2] == j) b++;
						if(call[a][0] == k || call[a][1] == k) b++;

						if(s != S[a] || b != B[a]) ok = false;
					}
					if(ok == true) ans++;
				}

			}
		}
	}

	cout<<ans<<endl;

	return 0;
}


