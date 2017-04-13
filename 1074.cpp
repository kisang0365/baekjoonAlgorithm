/*
 * 1074.cpp
 *
 *  Created on: 2017. 4. 13.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int main(){

	int N, r ,c ;

	while(cin >> N >> r >> c){

		int result = 0;
		int row = 1;
		for(int i=1; i<N; i++)
			row = row*2;

		int cases = 1;
		while(row > 1){

			if(row > r && row > c) cases = 0;
			else if(row > r && row <= c) cases =1;
			else if(row <= r && row > c) cases = 2;
			else cases = 3;

			result = result + cases*(row)*(row);
			row = row/2;

			if(cases != 0){
				if(cases == 1 || cases == 3) c= c - row*2;
				if(cases == 3 || cases == 2) r= r - row*2;

			}
		}

		if(r%2 == 0 && c%2 == 0) result += 0;
		else if(r%2 == 0 && c%2 == 1) result +=1;
		else if(r%2 == 1 && c%2 == 0) result +=2;
		else result += 3;

		cout<<result<<endl;
	}
	return 0;
}


