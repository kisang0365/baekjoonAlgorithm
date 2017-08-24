#include<iostream>
#include<queue>
using namespace std;

int Castle[51][51][4] = {0, };
int visit[51][51] = {0, };
int sizeArr[51][51] = {0, };
//남 동 북 서
//자료상 : 남 동 북 서

//이동 : 북 서 남 동
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int n,m;

int roomCount = 0;
int bigSize = 0;
int eraseSize = 0;

void bfs(int x, int y){

    queue<pair<int, int> > q;

    visit[x][y] = roomCount;

    int cnt = 1;
    q.push(make_pair(x,y));

    while(!q.empty()){

        int nowX = q.front().first;
        int nowY = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){

            int nextX = nowX + dx[i];
            int nextY = nowY + dy[i];

            if(0<=nextX && nextX <m && 0<= nextY && nextY < n && visit[nextX][nextY] == 0 ){

                if(Castle[nowX][nowY][i] == 0){
                    visit[nextX][nextY] = roomCount;
                    q.push(make_pair(nextX,nextY));
                    cnt++;
                }

            }
        }

    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(visit[i][j] == roomCount){
                sizeArr[i][j] = cnt;
            }
        }
    }

    if(cnt > bigSize) bigSize = cnt;

}





void input(int x, int y, int n){

    int k = 3;
    
    while(k>=0){
        Castle[x][y][k] = n%2;
        n/=2;
        k--;
    }
}


int main(){


    cin >> n >> m;

    // 11%2 = 1
    // 5%2 = 1
    // 2%2 = 0
    // 1%2 = 1

    //11 -> 1011
    //15- > 1111
    //8 -> 0100;


    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){
            visit[i][j] = 0;
            int num;
            cin >> num;
            input(i,j, num);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(visit[i][j] == 0){
                roomCount++;
                bfs(i,j);
            }
        }
    }

    eraseSize = bigSize;
    
    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){
            
            for(int k=0; k<4; k++){
                int newX = i+dx[k];
                int newY = j+dy[k];

                if(0<=newX && newX <m && 0<= newY && newY < n){
                    if(visit[i][j] != visit[newX][newY] ){
                        if(eraseSize < sizeArr[i][j] + sizeArr[newX][newY]){
                            eraseSize = sizeArr[i][j] + sizeArr[newX][newY];
                        }
                    }
                }
            }
        }
    }

    cout<<roomCount<<endl;
    cout<<bigSize<<endl;
    cout<<eraseSize<<endl;

    return 0;
}