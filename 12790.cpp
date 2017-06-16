/*
 * 12790.cpp
 *
 *  Created on: 2017. 6. 16.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

struct Charictor{
	int HP = 0;
	int MP = 0;
	int ATTACK = 0;
	int AMOR = 0;
};

int POWER(Charictor c){

	if(c.HP < 1) c.HP = 1;
	if(c.MP < 1) c.MP = 1;
	if(c.ATTACK < 0) c.ATTACK = 0;

	return c.HP + 5*c.MP + 2*c.ATTACK + 2*c.AMOR;
}


int main(){

	int T;
	cin >> T;

	while(T--){

		Charictor c;

		for(int i=1; i<=8; i++){
			int num;
			cin >> num;
			if(i%4 == 1) c.HP += num;
			else if(i%4 == 2) c.MP += num;
			else if(i%4 == 3) c.ATTACK += num;
			else c.AMOR += num;
		}

		cout<<POWER(c)<<endl;

	}

	return 0;
}


