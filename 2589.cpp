#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

struct Node{
    int x;
    int y;
    int cnt;
    Node(int x, int y, int cnt){
        this->x = x;
        this->y = y;
        this->cnt = cnt;
    }
};

int R, C;
char Map[51][51];
bool visit[51][51];

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

int Max = 0;

void bfs(int x, int y){

    queue<Node> q;
    q.push(Node(x,y,0));

    while(!q.empty()){
        
        int nx = q.front().x;
        int ny = q.front().y;
        int ncnt = q.front().cnt;
        q.pop();
        
        if(Max < ncnt) Max = ncnt;
        
        for(int i=0; i<4; i++){
            int newX = nx + dx[i];
            int newY = ny + dy[i];
            if(0<=newX && newX<= R && 0<=newY && newY <= C){
                if(Map[newX][newY] == 'L' && visit[newX][newY] == false){
                    visit[newX][newY] = true;
                    q.push(Node(newX, newY, ncnt+1));
                }
            }
        }
    }
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            visit[i][j] = false;
        }
    }

}

int main(){


    cin >> R >> C;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin >> Map[i][j];
            visit[i][j] = false;
        }
    }    

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(Map[i][j] == 'L'){
                bfs(i,j);
            }
            
        }
    }

    cout<<Max<<endl;


    return 0;
}