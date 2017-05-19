/*
 * 10219.cpp
 *
 *  Created on: 2017. 5. 18.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int H, W;
char G[13][13];


//바꾸는법 1. 좌우변경. 2. 90도씩회전.
//좌우변경 ->끝에서 현재위치 뺀거 = 처음에서 현재위치 더한거.
//90도 -> 좌공백 -> 위공백 위공백->우공백
//180도 -> 좌공백 -> 우공백 , 위공백-> 아래공백
//270도 -> 좌공백 -> 아래공백 , 위공백 -> 좌공


int main(){

	int T;
	cin >> T;
	while(T--){

		cin >> H >> W;

		for(int i=1; i<=H; i++){
			for(int j=1; j<=W; j++){
				cin >> G[i][j];
			}
			for(int width= W; width>0; width--){
				cout<<G[i][width];
			}
			cout<<endl;
		}
	}
	return  0;
}
