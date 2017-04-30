/*
 * 9375.cpp
 *
 *  Created on: 2017. 4. 30.
 *      Author: chokisang
 */



#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

	int T;
	cin >> T;
	while(T--){
		int n; //0 <=n <=30
		cin >> n;
		map<string, int> m;
		string str[30];
		int size = 0;

		for(int i=0; i<n; i++){
			string name;
			string part;
			cin >> name >> part;
			if(m.find(part) != m.end()){
				m.at(part)++;
			}
			else{
				m.insert(pair<string, int>(part,1));
				str[size] = part;
				size++;
			}
		}
		int ans = 1;
		//1개로 낼수있는 조합 -> size개로 낼수 있는 조합.
		for(int i=0; i<size; i++){
			ans *= (m.at(str[i])+1);
		}
		ans -= 1;
		cout<<ans<<endl;





	}



	return 0;
}

