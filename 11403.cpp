/*
 * 11403.cpp
 *
 *  Created on: 2017. 4. 8.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int G[101][101];
int H[101][101];

int main(void){

    int numPoint, point;
    cin >> numPoint;

    for(int i=1; i<=numPoint; i++){
    	for(int j=1; j<=numPoint; j++){
    		cin >> point;
    		if(point == 1){
    			G[i][j] = 1;
    		}
    	}
    }

    for(int k=1; k<=numPoint; k++){
		for(int i=1; i<=numPoint; i++){
			for(int j=1; j<=numPoint; j++){
				if(G[i][k] == 1 && G[k][j] == 1){
					G[i][j] = 1;
				}
			}
		}
    }

    for(int i=1; i<=numPoint; i++){
        	for(int j=1; j<=numPoint; j++){
        		cout << G[i][j] << " ";
        	}
        	cout << endl;
        }


	return 0;

}
