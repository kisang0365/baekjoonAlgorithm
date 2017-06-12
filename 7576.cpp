/*
 * 7577.cpp
 *
 *  Created on: 2017. 6. 12.
 *      Author: chokisang
 */

#include<iostream>
#include<queue>

using namespace std;

int M, N; //가로 세로 .
int T[1001][1001];
int counts = 0;
int maxs = 0;
queue<int> r,c, cnt;
int ans = 0;

int y[4] = {0, 0, 1, -1};
int x[4] = {1, -1, 0, 0};

void enqueue(int a, int b, int counting){
	c.push(a);
	r.push(b);
	cnt.push(counting);
}

void init(){

	cin >> M >> N;
	maxs = M* N;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> T[i][j];
			if(T[i][j] == 0){
			}else if(T[i][j] == 1){
				counts++;
				enqueue(i,j,0);
			}else{
				maxs--;
			}
		}
	}
	//cout<<maxs<<' '<<counts<<endl;
}

void bfs(){

	while(!r.empty()){

		int co = c.front();
		int ro = r.front();
		int cn = cnt.front();

		r.pop(); c.pop(); cnt.pop();

	//	cout<<co<<' ' <<ro<<' '<<cn<<"   checking"<<endl;
		for(int i=0; i<4; i++){

			int newR = ro + x[i];
			int newC = co + y[i];
		//	cout<<newR<< ' '<<newC<< ' '<<cn+1<<' '<<endl;

			if(newR >= 1 && newR <= M && newC >= 1 && newC <= N){

				if(T[newC][newR] == 0){

					T[newC][newR] = 1;
					enqueue(newC, newR, cn+1);
					counts++;
					if(counts >= maxs ){
						ans = cn+1;
						return;
					}

				}
			}


		}
	}

	ans = -1;

}

int main(){

	init();

	if(maxs == 0 && counts == 0) ans = 0;
	else if(maxs == 0) ans = -1;
	else if(counts == maxs) ans = 0;
	else bfs();
	cout<<ans<<endl;


	return 0;
}


