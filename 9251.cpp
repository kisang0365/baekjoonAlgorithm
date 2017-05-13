/*
 * 9251.cpp
 *
 *  Created on: 2017. 5. 13.
 *      Author: chokisang
 */


#include<iostream>
#include<string>

using namespace std;

int main(){

	string str1;
	string str2;
	cin >> str1 >> str2;

	int Dp[1001][1001];

	for(int i=0; i<str1.length(); i++){
		for(int j=0; j<str2.length(); j++){
			if(str1[i] == str2[j]){
				Dp[i+1][j+1] = Dp[i][j] + 1;
			}
			else{
				int max = Dp[i+1][j] > Dp[i][j+1] ? Dp[i+1][j] : Dp[i][j+1];
				Dp[i+1][j+1] = max;
			}
		}
	}
	cout<<Dp[str1.length()][str2.length()]<<endl;

	return 0;
}


