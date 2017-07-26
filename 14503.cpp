/*
 * 14503.cpp
 *
 *  Created on: 2017. 7. 26.
 *      Author: chokisang
 */

#include<iostream>

using namespace std;

int N, M;
int Board[51][51];
int x, y, d;
int ans = 0;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void checking(int sx, int sy){

	if(Board[sx][sy] == 0){
		Board[sx][sy] = 2;
		ans++;
	}

	int cnt = 1;
	int nx;
	int ny;
	while(cnt <= 4){

		d = (d+1)%4;

		nx = sx + dx[d];
		ny = sy + dy[d];
		if(nx>=0 && nx<N && ny >= 0 && ny<M){
			if(Board[nx][ny] == 0){
				break;
			}
		}
		cnt++;
	}
	if(cnt > 4){
		bool ok = true;
		int a = dx[d];
		int b = dy[d];

		if(sx-a <0 || sy-b < 0 || sx-a >=N || sy-b >=M || Board[sx-a][sy-b] == 1){
			ok = false;
		}

		if(ok){
			checking(sx-a, sy-b);
		}
		else{
			return;
		}
	}
	else{
		checking(nx, ny);
	}

}

//북->서, 서-> 남, 남->동, 동->북
//0 , 1, 2, 3.

int main(){

	cin >> N >> M;
	cin >> x >> y >> d;

	if(d==3) d=1;
	else if(d==1) d=3;

	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin >> Board[i][j];
		}
	}
	checking(x,y);
	cout<<ans<<endl;

}


