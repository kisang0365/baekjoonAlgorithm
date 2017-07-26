/*
 * 6603.cpp
 *
 *  Created on: 2017. 7. 26.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	while(1){
		int k;
		cin >> k;

		if(k==0) break;

		vector<int> v(k, 0);

		for(int i=0; i<k; i++){
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		for(int i=0; i<=k-6; i++){
			for(int j=i+1; j<=k-5; j++){
				for(int a=j+1; a<=k-4; a++){
					for(int b=a+1; b<=k-3; b++){
						for(int c=b+1; c<=k-2; c++){
							for(int d=c+1; d<=k-1; d++){
								cout<<v[i]<<' '<<v[j]<<' '<<v[a]<<' '<<v[b]<<' '<<v[c]<<' '<<v[d]<<endl;
							}
						}
					}
				}
			}
		}
		cout<<endl;

	}

	return 0;
}


