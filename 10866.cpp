/*
 * 10866.cpp
 *
 *  Created on: 2017. 4. 25.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main(){

	deque<int> d;
	int T;
	cin >> T;

	while(T--){
		string s;
		int num = 0;
		cin >> s;
		if(s == "push_back"){
			cin >> num;
			d.push_back(num);
		}
		else if( s=="push_front"){
			cin >> num;
			d.push_front(num);
		}
		else if(s == "pop_front"){
			if(d.empty()) cout<<"-1"<<endl;
			else {
				cout<<d.front()<<endl;
				d.pop_front();
			}
		}
		else if(s == "pop_back"){
			if(d.empty()) cout<<"-1"<<endl;
			else {
				cout<<d.back()<<endl;
				d.pop_back();
			}
		}
		else if(s == "size"){
			cout<<d.size()<<endl;
		}
		else if(s == "empty"){
			cout<<d.empty()<<endl;
		}
		else if(s == "front"){
			if(d.empty()) cout<<"-1"<<endl;
			else cout<<d.front()<<endl;
		}
		else if(s == "back"){
			if(d.empty()) cout<<"-1"<<endl;
			else cout<<d.back()<<endl;
		}
	}

	return 0;
}
