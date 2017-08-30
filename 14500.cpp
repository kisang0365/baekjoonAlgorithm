#include<iostream>

using namespace std;

int N, M;
int Value[501][501];
int Max = 0;
int dx[3] = {0, 1 , 0};
int dy[3] = {-1, 0, 1};
bool visit[501][501] = {false, };

void dfs(int x, int y, int cnt, int sum){

    if(cnt == 4){
        Max = Max > sum ? Max : sum;
        return;
    }
    visit[x][y] = true;
    //좌 우 아래.
    for(int i=0; i<3; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(0<=nx && nx < N && 0<=ny && ny<M){
            if(visit[nx][ny] == false){
                dfs(nx,ny,cnt+1, sum+Value[nx][ny]);   
            }
        }        

    }
    visit[x][y] = false;
}

void checkfuck(int x, int y){

    if(y+2 < M){
        int sum = Value[x][y] + Value[x][y+1] + Value[x][y+2];
        if(x-1 >= 0){
            if(sum + Value[x-1][y+1] > Max) Max = sum + Value[x-1][y+1];
        }
        if(x+1 < N){
            if(sum + Value[x+1][y+1] > Max) Max = sum + Value[x+1][y+1];
        }
    }
    
    if(x+2< N){
        int sum = Value[x][y] + Value[x+1][y] + Value[x+2][y];
        if(y-1 >= 0){
            if(sum + Value[x+1][y-1] > Max) Max = sum + Value[x+1][y-1];
        }
        if(y+1 < M){
            if(sum + Value[x+1][y+1] > Max) Max = sum + Value[x+1][y+1];
        }
    }

}


int main(){

    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> Value[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            dfs(i,j,1,Value[i][j]);
            checkfuck(i,j);
        }
    }

    cout<<Max<<endl;


    return 0;
}