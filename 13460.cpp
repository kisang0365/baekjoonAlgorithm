#include<iostream>
#include<queue>

using namespace std;

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
char Map[11][11];
int N, M;
struct Point{

    int rx;
    int ry;
    int bx;
    int by;

    int cnt;
    Point(int rx, int ry, int bx, int by, int cnt){
        this->rx = rx;
        this->ry = ry;
        this->bx = bx;
        this->by = by;
        this->cnt = cnt;
    }
};

queue<Point> q;

int bfs(){

    while(!q.empty()){
        Point cur = q.front();
        q.pop();
        if(cur.cnt > 10) continue;

        for(int i=0; i<4; i++){
            
            int nrx = cur.rx + dx[i];
            int nry = cur.ry + dy[i];
            int nbx = cur.bx + dx[i];
            int nby = cur.by + dy[i]; 
            
            bool meetBlue = false;
            bool meetRed = false;
            bool inValid = false;
            bool redPass = false;
            //레드이동. 
            while(0<=nrx && nrx < N && 0<=nry && nry < M){

                if(nrx == nbx && nry == nby){
                    meetBlue = true;
                    nrx -= dx[i];
                    nry -= dy[i];
                    break;
                }
                else if(Map[nrx][nry] == '#'){
                    nrx -= dx[i];
                    nry -= dy[i];
                    break;
                }
                else if(Map[nrx][nry] == 'O'){
                    redPass = true;
                    break;
                }
                else{
                    nrx += dx[i];
                    nry += dy[i];
                }
            }
            //블루이동
            while(0<=nbx && nbx < N && 0<=nby && nby < M){
                
                if(nrx == nbx && nry == nby){
                    meetRed = true;
                    nbx -= dx[i];
                    nby -= dy[i];
                    break;
                }
                else if(Map[nbx][nby] == '#'){
                        nbx -= dx[i];
                        nby -= dy[i];
                        break;
                }
                else if(Map[nbx][nby] == 'O'){
                    inValid = true;
                    break;
                }
                else{
                    nbx += dx[i];
                    nby += dy[i];
                }
            }

            if(redPass == true &&meetRed == true){
                continue;
            }
            else if(redPass == true){
                return cur.cnt;
            }
            
            if(inValid == true){
                continue;
            }
            
            if(meetBlue == true){
                nrx = nbx - dx[i];
                nry = nby - dy[i];
            }

            q.push(Point(nrx,nry, nbx, nby, cur.cnt+1));

        }
    }

    return -1;

}

int main(){

    cin >> N >> M;
    //. -> 빈칸 , # -> 공 이동 x, O -> 구멍위치 , 'R'은 빨간구슬 위치, 'B'는 파란구슬 위치. 
    int rx, ry, bx, by;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> Map[i][j];
            if(Map[i][j] == 'R'){
                rx = i;
                ry = j;
            }
            if(Map[i][j] == 'B'){
                bx = i;
                by = j;
            }
        }
    }
    q.push(Point(rx,ry,bx,by, 1));

    cout<<bfs()<<endl;
    return 0;
}