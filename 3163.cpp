/*
 * test.cpp
 *
 *  Created on: 2017. 5. 30.
 *      Author: chokisang
 *
 *      참고 : https://github.com/mastojun/ProblemSolving/blob/master/acmicpc.net/031/3163.cpp
 *
 */



#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

struct Ant{

	int id;
	int pos;
	bool isLeft;

	Ant(int pos, bool isLeft){
		this->pos = pos;
		this->isLeft = isLeft;
		this->id = 0;
	}

    bool operator < (const Ant& right) const{
        if(pos == right.pos) return id < right.id;
        return pos < right.pos;
    }

};

int L, N, k;
vector<Ant> ants;
vector<int> ids;

void init(){

	cin >> N >> L >> k;
	ants.clear();
	ids.clear();

	for(int i=0; i<N; i++){
		int id, pos;
		cin >> pos >> id;
		ids.push_back(id);

		if(id > 0){
			ants.push_back(Ant(L-pos, false));
		}
		else{
			ants.push_back(Ant(pos, true));
		}
	}
	int idx = 0;

	for(auto& ant : ants){
		if(ant.isLeft) ant.id = ids[idx++];
	}
	for(auto& ant : ants){
		if(!ant.isLeft) ant.id = ids[idx++];
	}

}

int solve(){
	sort(ants.begin(), ants.end());
	return ants[k-1].id;
}



int main(){
	int T;
	cin >> T;
	while(T--){

		init();

		cout<<solve()<<endl;

	}
	return 0;

}




