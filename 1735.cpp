/*
 * 1735.cpp
 *
 *  Created on: 2017. 7. 3.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int gcd(int A, int B){

	if(B == 0) return A;

	return gcd(B, A%B);
}

int main(){

	int A1, B1 , A2, B2;
	//분자 분모
	cin >> A1 >> B1 >> A2 >> B2;

	int T1 = A1*B2 + B1*A2;
	int T2 = B1*B2;
	bool t1bunza = true;
	if(T1 < T2){
		t1bunza = false;
		int temp = T1;
		T1 = T2;
		T2 = temp;
	}

	int Mod = gcd(T1, T2);
	if(t1bunza == false){
		cout<<T2/Mod<<' '<<T1/Mod<<endl;
	}
	else{
		cout<<T1/Mod<<' '<<T2/Mod<<endl;
	}

	return 0;
}


