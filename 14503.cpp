#include<iostream>

using namespace std;

int N, M;
int r, c, d;
//북0 동 1 남2 서 3
//북 -> 서
//동 -> 북
// 남 -> 동
// 서 -> 남

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int Wall[51][51];
int visit[51][51] = {0, };
int ans = 0;

void find(int x, int y){
    
    if(visit[x][y] == 0){
        visit[x][y] = 1;
        ans++;
    }

    int newX, newY;
    int cnt = 0;
    while(cnt < 4){
        
        d = (d+1)%4;

        newX = dx[d]+x;
        newY = dy[d]+y;

        if(0<= newX && newX < N && 0<=newY && newY < M){
            if(visit[newX][newY] == 0){
                break;
            }
        }
        cnt++;
    }
    
    if(cnt >= 4){
        newX = -dx[d]+x;
        newY = -dy[d]+y;
        
        if(newX >= 0 && newX < N && newY >= 0 && newY < M){
            if(Wall[newX][newY] == 0){
                find(newX, newY);
            }
        }
    }
    else{
        find(newX, newY);
    }
}

int main(){

    cin >> N >> M;
    cin >> r >> c >> d;

    if( d == 3) d = 1;
    else if(d == 1) d = 3;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> Wall[i][j];
            visit[i][j] = 0;
            if(Wall[i][j] == 1) visit[i][j] = 1;
        }
    }
    find(r,c);
    cout<<ans<<endl;
    return 0;
}