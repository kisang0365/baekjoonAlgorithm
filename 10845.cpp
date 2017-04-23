/*
 * 10845.cpp
 *
 *  Created on: 2017. 4. 23.
 *      Author: chokisang
 */


#include<iostream>
#include<queue>
using namespace std;

int main(){

	queue<int> q;

	int T;
	cin >> T;
	while(T--){
		string s;
		int num = 0;
		cin >> s;
		if(s=="push"){
			cin >> num;
			q.push(num);
		}
		else if(s=="pop"){
			if(q.empty())
				cout<<"-1"<<endl;
			else {
				cout<<q.front()<<endl;
				q.pop();
			}
		}
		else if(s=="size"){
			cout<<q.size()<<endl;
		}
		else if(s=="empty"){
			cout<<q.empty()<<endl;
		}
		else if(s=="front"){
			if(q.empty())
				cout<<"-1"<<endl;
			else
				cout<<q.front()<<endl;
		}
		else if(s=="back"){
			if(q.empty())
				cout<<"-1"<<endl;
			else
				cout<<q.back()<<endl;
		}
	}

	return 0;
}


