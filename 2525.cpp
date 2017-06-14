/*
 * 2525.cpp
 *
 *  Created on: 2017. 6. 14.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int A, B, C;
	int addH, addM;
	cin >> A >> B >> C;

	addH = C/60;
	addM = C%60;

	int finishH = A + addH;
	int finishM = B + addM;

	if(finishM >= 60){
		finishM-=60;
		finishH++;
	}

	if(finishH >=24) finishH-=24;

	cout<<finishH<< ' '<<finishM<<endl;

	return 0;
}


