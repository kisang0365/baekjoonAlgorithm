/*
 * 10828.cpp
 *
 *  Created on: 2017. 4. 20.
 *      Author: chokisang
 */

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){

	stack<int> st;

	int T;
	cin >> T;

	while(T--){

		string s;
		cin >> s;

		if(s == "push"){
			int num;
			cin >> num;
			st.push(num);
		}
		else if(s == "pop"){
			if(st.size() == 0) cout<<"-1"<<endl;
			else{ cout<<st.top()<<endl;
				  st.pop();
			}
		}
		else if(s == "size"){
			cout<<st.size()<<endl;
		}
		else if(s == "empty"){
			cout<<st.empty()<<endl;
		}
		else if(s == "top"){
			if(st.size() == 0) cout<<"-1"<<endl;
			else cout<<st.top()<<endl;
		}
	}


	return 0;
}




