/*
 * 1963.cpp
 *
 *  Created on: 2017. 8. 1.
 *      Author: chokisang
 */


#include<iostream>
#include<vector>
#include<queue>

using namespace std;


int Arr[10000] = {0, };

int bfs(int first, int second){

	queue<pair<int, int> > q;
	q.push(make_pair(first, 0));
	int visit[10000] = {0, };
	visit[first] = 1;

	while(!q.empty()){

		int num = q.front().first;
		int cnt = q.front().second;
		q.pop();

		int newNum;

		if(num == second) return cnt;

		for(int i=1; i<=9; i++){
			newNum = i*1000 + num%1000;
			if(Arr[newNum] == 0 && visit[newNum] == false){
				visit[newNum] = true;
				q.push(make_pair(newNum, cnt+1));
			}
		}

		for(int i=0; i<=9; i++){
			newNum = (num/1000)*1000 + i*100 + num%100;
			if(Arr[newNum] == 0 && visit[newNum] == false){
				visit[newNum] = true;
				q.push(make_pair(newNum, cnt+1));
			}
		}

		for(int i=0; i<=9; i++){
			newNum = (num/100)*100 + i*10 + num%10;
			if(Arr[newNum] == 0 && visit[newNum] == false){
				visit[newNum] = true;
				q.push(make_pair(newNum, cnt+1));
			}
		}

		for(int i=0; i<=9; i++){
			newNum = (num/10)*10 + i;
			if(Arr[newNum] == 0 && visit[newNum] == false){
				visit[newNum] = true;
				q.push(make_pair(newNum, cnt+1));
			}
		}
	}
	return -1;
}



int main(){

	vector<int> PrimeNumber;


	for(int i=2; i<=5000; i++){
		if(Arr[i] == 1) continue;

		for(int j=2; i*j<=10000; j++){
			Arr[i*j] = 1;
		}
	}


	int N;
	cin >> N;

	while(N--){
		int first, second;
		cin >> first >> second;

		int ans = bfs(first,second);
		if(ans == -1) cout<<"Impossible"<<endl;
		else cout<<ans<<endl;
	}

	return 0;
}

