/*
 * 9252.cpp
 *
 *  Created on: 2017. 5. 14.
 *      Author: chokisang
 */



#include<iostream>
#include<string>

using namespace std;

struct LCS{
	int count;
	string str;

	LCS(){
		count = 0;
		str = "";
	}
};

int main(){

	string str1, str2;
	cin >> str1 >> str2;

	int Dp[1001][1001];

	for(int i=0; i<str1.length(); i++){
		for(int j=0; j<str2.length(); j++){

			if(str1[i] == str2[j] ){
				Dp[i+1][j+1] = Dp[i][j] + 1;
//				str[i+1][j+1] = str[i][j] + str1[i];
			}
			else{
				if(Dp[i][j+1] > Dp[i+1][j]){
					Dp[i+1][j+1] = Dp[i][j+1];
	//				str[i+1][j+1] += str[i][j+1];
				}else{
					Dp[i+1][j+1] = Dp[i+1][j];
		//			str[i+1][j+1] += str[i+1][j];
				}
			}
		}
	}

	int length1 = str1.length();
	int length2 = str2.length();
	string str = "";
	while(Dp[length1][length2] >= 1){

		if(str1[length1-1] == str2[length2-1]){
			str = str1[length1-1] + str;
			length1 --;
			length2 --;
		}
		else{
			if(Dp[length1][length2] > Dp[length1][length2-1]){
				length1 -= 1;
//				str[i+1][j+1] += str[i][j+1];
			}else{
				length2 -=1;
	//			str[i+1][j+1] += str[i+1][j];
			}
		}

	}


	for(int i=0; i<=str1.length(); i++){
		for(int j=0; j<=str2.length(); j++){
				cout<<Dp[i][j]<< ' ';
		}
		cout<<endl;
	}
	cout<<Dp[str1.length()][str2.length()]<<endl;
	cout<<str<<endl;

	return 0;
}




