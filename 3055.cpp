#include<iostream>
#include<queue>

using namespace std;

struct Node{
    int x;
    int y;
    int cnt;
    Node(int x = 0, int y = 0, int cnt = 0){
        this->x = x;
        this->y = y;
        this->cnt = cnt;
    }
};

int R, C;
char forest[51][51];
int MakeWater[51][51];
bool visit[51][51];

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
queue<Node> water;

void WaterShower(){

    while(!water.empty()){
        Node cur = water.front();
        water.pop();

        for(int i=0; i<4; i++){
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            int ncnt = cur.cnt+1;
            if(0<=nx && nx < R && 0<=ny && ny < C){

                if(MakeWater[nx][ny] == 100000 && forest[nx][ny] == '.'){
                    water.push(Node(nx,ny,ncnt));
                    MakeWater[nx][ny] = ncnt;
                }
            }
        }
    }
}

int Move(Node S){

    while (!water.empty())
    {
        water.pop();
    }

    water.push(S);

    visit[S.x][S.y] = true;

    while(!water.empty()){
        Node cur = water.front();
        water.pop();

        int how = 0;
        for(int i=0; i<4; i++){
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            int ncnt = cur.cnt + 1;

            if(0<=nx && nx < R && 0<=ny && ny < C){

                if(visit[nx][ny] == false && forest[nx][ny] != 'X' && MakeWater[nx][ny] > ncnt){
                   if(forest[nx][ny] == 'D') return ncnt;
                    
                    water.push(Node(nx,ny,ncnt));
                    MakeWater[nx][ny] = ncnt;
                    how++;
                }
            }
        }
        if(how == 0) visit[cur.x][cur.y] = true;
    }
    return -1;
}

int main(){

    cin >> R >> C;
    
    Node S;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin >> forest[i][j];
            MakeWater[i][j] = 100000;
            visit[i][j] = false;
            if(forest[i][j] == '*'){
                water.push(Node(i,j,0));
                MakeWater[i][j] = 0;
            } 
            else if(forest[i][j] == 'S') S = Node(i,j,0);
        }
    }

    WaterShower();
    
    int ans = Move(S);
    if(ans==-1) cout<<"KAKTUS"<<endl;
    else cout<<ans<<endl;


    return 0;
}