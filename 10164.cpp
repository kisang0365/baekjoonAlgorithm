#include<iostream>

using namespace std;

int N, M, K;

int Arr[16][16];
int dx[2] = {0, -1};
int dy[2] = {-1, 0};

int findPath(int sx, int sy, int ex, int ey){
    int Dp[16][16] = {0, };
    for(int i=sx; i<ex; i++){
        for(int j=sy; j<ey; j++){
            if(i==sx) Dp[i][j] = 1;
            else{
                for(int k=0; k<2; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if(nx >= sx && nx < ex && ny >= sy && ny < ey){
                       Dp[i][j] += Dp[nx][ny];
                    }
                }
            }
        }
    }
    return Dp[ex-1][ey-1];
}


int main(){

    cin >> N >> M >> K;
    int mx = 0, my = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            Arr[i][j] = i*M+j+1;
            if(i*M+j+1 == K){
                mx = i;
                my = j;
            }
        }
    }
    if(K==0) cout<<findPath(0,0,N,M)<<endl;
    else{
       cout<<findPath(0,0,mx+1,my+1)*findPath(mx,my, N, M)<<endl;    
    }

    return 0;
}