/*
 * 1181.cpp
 *
 *  Created on: 2017. 4. 19.
 *      Author: chokisang
 */

#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

vector<string> v;



const bool compareString(string a, string b){
	return a.compare(b) < 0;
}



void print(){

	string check = "";
	sort(v.begin(), v.end(), compareString);

	for(int i=0; i<v.size(); i++){
		if(check != v.at(i)){
			cout<<v.at(i)<<endl;
			check = v.at(i);
		}
	}
}


int main(){

	int N;
	cin >> N;

	multimap<int, string> m;
	string str[200001];

/*
	string duplicate = "";
	for(int i=0; i<N; i++){

		for(int j=i+1; j<N; j++){
			if(str[i].length() > str[j].length()){
				string temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			else if(str[i].length() == str[j].length()){
				if(str[j] == compareString(str[i], str[j])){
					string temp = str[i];
					str[i] = str[j];
					str[j] = temp;
				}
			}
		}
		if(str[i] != duplicate){
			cout<<str[i]<<endl;
			duplicate = str[i];
		}
	}
	return 0;
}
*/

	multimap<int, string>::iterator iter;

	//중복제거.
	for(int i=0; i<N; i++){
		cin >> str[i];
		m.insert(pair<int, string>(str[i].length(), str[i]));
	}

	int num = 0;
	for(iter = m.begin(); iter != m.end(); iter++){
		if(v.size() < 1){
			num = (*iter).first;
			v.push_back((*iter).second);
		}
		else{
			if(num == (*iter).first){
				v.push_back((*iter).second);
			}
			else{
				print();
				v.clear();
				num = (*iter).first;
				v.push_back((*iter).second);
				//벡터비교 .
			}
		}
		//cout<<(*iter).second<<endl;
	}
	print();
	return 0;
}


