#include<iostream>
#include<cmath>
using namespace std;

int N, M;
char Board[51][51];
int visit[51][51];
int Dp[51][51];

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
bool cycle = false;

void dfs(int x, int y){

	if(Board[x][y] == 'H') return;

	visit[x][y] = 1;

	for(int i=0; i<4; i++){
		int k = Board[x][y] - '0';
		int nx = x + dx[i]*k;
		int ny = y + dy[i]*k;

		if(nx >= 0 && nx < N && ny >= 0 && ny < M){
			if(visit[nx][ny] == 1){
				cycle = true;
				return;
			}
			else{
				dfs(nx,ny);
			}
		}
	}
	visit[x][y] = 0;
}

int calc(int x, int y){

	if(x<0 || x>=N || y<0 || y>=M || Board[x][y] == 'H') return 0;
	int &value = Dp[x][y];
	if(value) return value;
	value = 1;

	for(int i=0; i<4; i++){
		int k = Board[x][y] - '0';
		int nx = x + dx[i]*k;
		int ny = y + dy[i]*k;

		value = max(value, calc(nx, ny)+1);
	}
	return value;
}



int main(){

	cin >> N >> M;

	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin >> Board[i][j];
			visit[i][j] = 0;
			Dp[i][j] = 0;
		}
	}
	dfs(0,0);
	if(cycle){
		cout<<"-1"<<endl;
	}
	else{
		cout<<calc(0,0)<<endl;
	}

	return 0;
}
