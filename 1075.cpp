/*
 * 1075.cpp
 *
 *  Created on: 2017. 4. 13.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	long long int N, F;
	cin >> N >> F;

	N = (N/100)*100;
	int ans;
	if(N%F == 0) ans = 0;
	else ans = F- (N%F) ;
	if(ans <10) cout<<"0";
	cout<<ans<<endl;


	return 0;
}


