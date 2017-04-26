/*
 * 5430.cpp
 *
 *  Created on: 2017. 4. 26.
 *      Author: chokisang
 */


#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main(){

	int T;
	cin >> T;

	while(T--){
		//함수
		string p;
		cin >> p;
		//들어오는갯수
		int n;
		cin >> n;
		//배열
		string arr;
		cin >> arr;

		deque<int> d;

		string temp = "";
	    for(int i=1; i<arr.length()-1; i++){
	    	if(arr[i] == ','){
	    		d.push_back(stoi(temp));
	    		temp = "";
	    	}
	    	else if(i == arr.length()-2){
	    		temp += arr[i];
	    		d.push_back(stoi(temp));
	    	}
	    	else temp += arr[i];
	    }

	    bool left = true;
	    bool ok = true;
	    int go = 0;
	    while(go < p.length()){

	    	if(p[go] == 'R'){
	    		left = !left;
	    	}
	    	else if(p[go] == 'D' && d.empty()){
	    		ok = false;
	    		break;
	    	}
	    	else{
	    		if(left) d.pop_front();
	    		else d.pop_back();
	    	}
	    	go++;
	    }

	    if(ok == false) cout<<"error"<<endl;
		else{
			cout<<"[";
			if(left){
				deque<int>::iterator iter;
				int a = 1;
				for(iter = d.begin(); iter!= d.end(); iter++){
					if(a == d.size()) cout<<*iter;
					else cout<<*iter<<",";
					a++;
				}
			}else{
				deque<int>::reverse_iterator iter;
				int a = 1;
				for(iter = d.rbegin(); iter!= d.rend(); iter++){
					if(a == d.size()) cout<<*iter;
					else cout<<*iter<<",";
					a++;
				}
			}
			cout<<"]"<<endl;
	    }
	}




	return 0;
}
