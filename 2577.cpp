/*
 * 2577.cpp
 *
 *  Created on: 2017. 4. 14.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	int A,B,C;

	int T[10] = {0, };

	cin >> A >> B >>C;

	int ans = A*B*C;

	while(ans != 0){
		//cout<<ans%10<<endl;
		T[ans%10]++;
		ans/=10;
	}
	for(int i=0; i<10; i++)
		cout<<T[i]<<endl;
	return 0;
}
