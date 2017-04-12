/*
 * 1085.cpp
 *
 *  Created on: 2017. 4. 12.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using  namespace std;

int main(){

	//w,h <=1000 ,  1<=x<=w-1 , 1<=y<=h-1
	int x,y,w,h;

	cin >> x >> y >> w >> h;

	cout << min( min(w-x, x), min(h-y, y) )<<endl;

}


