/*
 * 2504.cpp
 *
 *  Created on: 2017. 4. 23.
 *      Author: chokisang
 */


#include<iostream>
#include<string>
#include<stack>

using namespace std;

string s;

int main(){

	cin >> s;
	stack<char> st;
	int ans = 0;
	int temp = 1;
	bool ok = true;
	int a=0,b =0;

	for(int i=0; i<s.length(); i++){
		if(s[i] == '('){
			st.push(s[i]);
			a++;
			temp *= 2;
			if(i == s.length()-1){
				ok = false;
				ans = 0;
			}
			else if(s[i+1] == ')'){
				ans += temp;
			}
		}
		else if(s[i] == '['){
			st.push(s[i]);
			b++;
			temp *=3;
			if(i == s.length()-1){
				ok = false;
				ans = 0;
			}
			else if(s[i+1] == ']'){
				ans += temp;
			}
		}
		else if(s[i] == ')'){
			if(st.top() == '('){
				a--;
				st.pop();
			}
			temp /= 2;
		}
		else if(s[i] == ']'){
			if(st.top() == '['){
				b--;
				st.pop();
			}
			else{
				ans = 0;
				ok = false;
			}
			temp /= 3;
		}
		if(ok == false) break;
	}
	if(a!=0 || b!=0) ans = 0;
	cout<<ans<<endl;
	return 0;
}
