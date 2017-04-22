/*
 * 1874.cpp
 *
 *  Created on: 2017. 4. 20.
 *      Author: chokisang
 */

#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

stack<int> st;

int main(){

	int n, number;
	string ans="";

	cin >> n;

	int rear=1;
	bool ok = true;

	for(int point=0; point < n; point++){

		cin >> number;

		if(st.empty() != 1 && (number > n || number < st.top())){
			ok = false;
			break;
		}
		//비었으면 집어넣기.
		while(rear <= number){
			st.push(rear);
			ans += "+";
			rear++;
		}
		st.pop();
		ans += "-";
	}

	if(ok == false) cout<<"NO"<<endl;
	else{
		for(int i=0; i<ans.length(); i++)
			cout<<ans[i]<<"\n";
	}
	return 0;
}


//1257
//4368
