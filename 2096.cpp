/*
 * 2096.cpp
 *
 *  Created on: 2017. 6. 27.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>

using namespace std;

int main(){

	int N;
	int DpMax[2][3];
	int DpMin[2][3];
	int value[3];

	cin >> N;

	for(int i=0; i<=1; i++){

		for(int j=0; j<=2; j++){
			DpMax[i][j] = 0;
			DpMin[i][j] = 0;
		}
	}

	for(int i=1; i<=N; i++){

		cin >> value[0] >> value[1] >> value[2];

		for(int j=0; j<=2; j++){
			if(j==0){
				if(i%2 == 1){
					DpMax[1][j] = max(DpMax[0][j], DpMax[0][j+1]) + value[j];
					DpMin[1][j] = min(DpMin[0][j], DpMin[0][j+1]) +value[j];
				}
				else{
					DpMax[0][j] = max(DpMax[1][j], DpMax[1][j+1]) + value[j];
					DpMin[0][j] = min(DpMin[1][j], DpMin[1][j+1]) +value[j];

				}
			}
			else if(j==1){
				if(i%2 == 1){
					DpMax[1][j] = max( max(DpMax[0][j-1], DpMax[0][j]), DpMax[0][j+1]) +value[j];
					DpMin[1][j] = min( min(DpMin[0][j-1], DpMin[0][j]), DpMin[0][j+1]) +value[j];
				}
				else{
					DpMax[0][j] = max( max(DpMax[1][j-1], DpMax[1][j]), DpMax[1][j+1]) +value[j];
					DpMin[0][j] = min( min(DpMin[1][j-1], DpMin[1][j]), DpMin[1][j+1]) +value[j];
				}
			}
			else{
				if(i%2 == 1){
					DpMax[1][j] = max(DpMax[0][j], DpMax[0][j-1]) + value[j];
					DpMin[1][j] = min(DpMin[0][j], DpMin[0][j-1]) +value[j];
				}
				else{
					DpMax[0][j] = max(DpMax[1][j], DpMax[1][j-1]) + value[j];
					DpMin[0][j] = min(DpMin[1][j], DpMin[1][j-1]) +value[j];
				}
			}
		}
	}

	if(N%2 == 0) N=0;
	else N=1;

	int MaxValue = max( max(DpMax[N][0], DpMax[N][1]), DpMax[N][2]);
	int MinValue = min( min(DpMin[N][0], DpMin[N][1]), DpMin[N][2]);

	cout<<MaxValue<<' '<<MinValue<<endl;


	return 0;
}


