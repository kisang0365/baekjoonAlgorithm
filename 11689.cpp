/*
 * 11689.cpp
 *
 *  Created on: 2017. 6. 7.
 *      Author: chokisang
 */

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main(){

	long long int n,cn;
	cin >> n;
	cn = n;

	vector<long long int> v;

	for(long long int i=2; i*i <=n; i++){
		//n이 나머지가 아닐시 그냥 지나침
		if(n%i) continue;
		else{
			//n이 소수일 떄까지 나누기.
			while(!(n%i)) n/=i;
			//소수의 경우 집어넣기.
			v.push_back(i);
		}
	}

	//1이 딱 나누어떨어지지 않을 경우 .
	if(n != 1) v.push_back(n);

	n = cn;

	//순서대로 정렬 , 오름차순
	sort(v.begin(), v.end());

	//값
	queue<long long int> q;
	//index
	queue<int> p;
	//덧셈 뺼셈 유무
	queue<bool> c;

	for(long long int i=0; i<v.size(); i++){
		q.push(v[i]);
		p.push(i);
		c.push(true);
	}

	long long int ans = n;

	while(!q.empty()){

		long long int m = q.front(); q.pop();
		bool flag = c.front(); c.pop();
		int s = p.front(); p.pop();

		// 중복되지 않은 경우
		if(flag){
			ans -= n/m;
		}
		//중복된게 있을경우 -
		else{
			ans += n/m;
		}

		for(long long int i= s+1; i <v.size(); i++){
			//서로소 끼리 곱한거 즉 겹치는수 .
			long long int nm = m * v[i];
			if(nm <= n){
				//flag 변경을 통한 겹친것에 대한 조절.
				q.push(nm);
				c.push(!flag);
				p.push(i);
			}
			else{
				break;
			}
		}
	}
	cout<<ans<<endl;

	return 0;
}


