/*
 * 1072.cpp
 *
 *  Created on: 2017. 7. 31.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	long long int X,Y;

	while(cin >> X){

		cin >> Y;
		long long int first = (Y*100) / X ;
		bool ok = false;
		long long int ans = 0;

		if(first >= 99){
			ok = false;
		}
		else{
			long long int left = 0;
			long long int right = 11120000000;

			while(left <= right){
				long long int mid = (left+right)/2;

				long long int Z = ((Y+mid)*100) / (X + mid);
				if(first < Z){
					right = mid - 1;
					ok = true;
				}
				else{
					left = mid + 1;
				}
			}
			ans = left;
		}

		if(ok) cout<<ans<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}


