/*
 * 11650.cpp
 *
 *  Created on: 2017. 7. 27.
 *      Author: chokisang
 */


#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

struct Point{
	int x;
	int y;
};

bool comp (const Point a, const Point b){
	if(a.x < b.x) return true;
	else if(a.x < b.x){
		return false;
	}
	else{
		if(a.y < b.y){
			return true;
		}else{
			return false;
		}
	}
}

int main(){

	int N;
	scanf("%d", &N);
	vector<pair<int, int > > v(N);

	for(int i=0; i<N; i++)
	{
		scanf("%d %d", &v[i].first, &v[i].second);
	}

	//sort(v.begin(), v.end(), comp);
	sort(v.begin(), v.end());
	for(int i=0; i<N; i++){
		printf("%d %d\n", v[i].first, v[i].second);
	}

	return 0;
}

