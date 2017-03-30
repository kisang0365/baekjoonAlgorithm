/*
 * 4963.cpp
 *
 *  Created on: 2017. 3. 28.
 *      Author: chokisang
 */

#include<iostream>
#include<fstream>

using  namespace std;

int M[52][52] = {0, };

void check(int i, int j){

	M[i][j] = 0;

	int px[] = {0, 1, 1, 1, 0, -1, -1, -1};
	int py[] = {1, 1, 0, -1, -1, -1, 0, 1};

	for(int z=0; z<8; z++){
		int x= i+px[z];
		int y = j+py[z];
		if(M[x][y] == 1) check(x,y);
	}

}

int main(){

	ifstream f;
	f.open("input.txt");

	int w, h;
	f >> w >> h;

	do{
		for(int i=1; i<=h; i++){
			for(int j=1; j<=w; j++){
				f >> M[i][j];
			}
		}
		int count = 0;
		for(int i=1; i<=h; i++){
				for(int j=1; j<=w; j++){
					if(M[i][j] == 1){
						count++;
						check(i, j);
					}
				}
		}
		cout << count << endl;
		f >> w >> h;
	}while(w!= 0 && h != 0);

	return 0;
}
