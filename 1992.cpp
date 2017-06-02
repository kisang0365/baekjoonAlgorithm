/*
 * 1992.cpp
 *
 *  Created on: 2017. 6. 2.
 *      Author: chokisang
 */


#include<iostream>
#include<string>
using namespace std;

class QuardTree {
private:
	int s[65][65];
	string ans;
	int N;
public:
	QuardTree(int N);
	bool checking(int r1, int r2, int c1, int c2);
	void quard(int r1, int r2, int c1, int c2);
	void print();
};

QuardTree::QuardTree(int N){
		this->N = N;
		for(int i=0; i<N; i++){
			string temp;
			cin >> temp;
			for(int j=0; j<N; j++){
				s[i][j]=temp[j] - '0';
			}
		}
		ans="";
		quard(0,N,0,N);
}
bool QuardTree::checking(int r1, int r2, int c1, int c2){

	int a = s[r1][c1];
	for(int i=r1; i<r2; i++){
		for(int j=c1; j<c2; j++){
			if(a!=s[i][j]) return false;
		}
	}
	return true;
}
void QuardTree::quard(int r1, int r2, int c1, int c2){

	int k  = (r2 - r1)/2;

	if(checking(r1, r2, c1, c2)){
		ans += to_string(s[r1][c1]);

		return;
	}
	else{
		ans+="(";

		if(k>=1){
			quard(r1, r1+k, c1, c1+k);
			quard(r1, r1+k, c1+k, c2);
			quard(r1+k, r2, c1, c1+k);
			quard(r1+k, r2, c1+k, c2);

		ans+=")";
		}
	}

}

void QuardTree::print(){
	cout<<ans<<endl;
}



int main(){

	int N;
	cin >> N;

	QuardTree t(N);

	t.print();



	return 0;
}

