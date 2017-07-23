/*
 * 14647.cpp
 *
 *  Created on: 2017. 7. 23.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int n, m;
	cin >> n >> m;

	int B[501][501];
	int R9[501] = {0, };
	int C9[501] = {0, };

	int Max = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){

			cin >> B[i][j];

			while(B[i][j] > 1){
				int k = B[i][j]%10;

				if(k == 9){
					R9[i]++;
					C9[j]++;
					if(Max < R9[i]) Max = R9[i];
					if(Max < C9[i]) Max = C9[i];
				}

				B[i][j] /= 10;
			}
		}
	}
	int ans = 0;
	for(int i=0; i<n; i++){
		ans += R9[i];
	}
	cout<<ans-Max<<endl;

	return 0;
}

