#include<iostream>
#include<queue>
using namespace std;

int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

struct Node{
    int x;
    int y;
    int z;
    int cnt;
    Node(int x = 0, int y = 0, int z = 0, int cnt =0){
        this->x = x;
        this->y = y;
        this->z = z;
        this->cnt = cnt;
    }
};
bool operator<(Node a, Node b){
    return a.cnt > b.cnt;
}

int L, R, C;
char Arr[31][31][31];

int Dijstra(Node S, Node E){

    priority_queue<Node> q;
    q.push(S);
    bool visit[31][31][31] = {false, };
    visit[S.x][S.y][S.z] = true;

    while(!q.empty()){
        
        Node cur = q.top();
        
        q.pop();

        for(int i=0; i<6; i++){

            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            int nz = cur.z + dz[i];

            if(1<=nx && nx <=R && 1<=ny && ny <= C && 1<=nz && nz <=L){
                if(visit[nx][ny][nz] == false && Arr[nx][ny][nz] != '#'){
                    if(nx == E.x && ny == E.y && nz == E.z) return cur.cnt+1;
                    visit[nx][ny][nz] = true;
                    q.push(Node(nx,ny,nz,cur.cnt+1));
                }
            }

        }

    }
    return -1;
}



int main(){

    while(1){
        cin >> L >> R >> C;
        if(L==0 && R==0 && C==0) break;

        Node S, E;

        for(int k = 1; k<=L; k++){
            for(int i=1; i<=R; i++){
                for(int j=1; j<=C; j++){
                    cin >> Arr[i][j][k];
                    if(Arr[i][j][k] == 'S')
                        S = Node(i,j,k,0);
                    if(Arr[i][j][k] == 'E')
                        E = Node(i,j,k,0);
                }
            }
        }

        int ans = Dijstra(S, E);
            
        if(ans >= 0){
            cout<<"Escaped in "<<ans<<" minute(s)."<<endl;
        }
        else{
            cout<<"Trapped!"<<endl;
        }

    }
    return 0;
}