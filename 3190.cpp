#include<iostream>
#include<vector>

using namespace std;
typedef struct _Rotate{
    int n;
    char c;

}Rotate;

typedef struct _Point{
    int x;
    int y;

    _Point(int x = 0, int y = 0){
        this->x = x;
        this->y = y;
    }
}Point;

int N, K, L;
int idx = 0;

bool Apple[102][102] = {false, };
vector<Point> v;
int BamIndex = 0;

Rotate R[102];
int ans = 0;
int dir = 0;
//dir = 0 우측 , dir = 1 아래 , dir = 2 왼측, dir = 3 위측
const int dx[4]  = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};


void search(int x, int y, int length){
    
    //nx, ny는 다음 헤드의 위치. 
    int nx = x + dx[dir];
    int ny = y + dy[dir];

    //꼬리부분
    length += 1;
    ans++;
    
    if(nx < 1 || nx > N || ny < 1 || ny > N){
        return;
    }
    //nx,ny가 겹치면 
    for(int i=BamIndex; i<v.size(); i++){
        if(nx == v[i].x && ny == v[i].y) return;
    }

    v.push_back(Point(nx,ny));
    
    if(Apple[nx][ny] == true){
        Apple[nx][ny] = false;
    }
    else{
        BamIndex++;
        length -= 1;
    }

    //방향전환
    if(ans == R[idx].n){
        
        if(R[idx].c == 'L'){
            dir -= 1;
            if(dir < 0) dir = 3;
        }
        else{
            dir += 1;
            if(dir == 4) dir = 0;
        }
        idx++;  
    }
    search(nx, ny, length);
}


int main(){


    cin >> N >> K;

    for(int i=0; i<K; i++){
        int x, y;
        cin >> x >> y;
        Apple[x][y] = true;
    }

    cin >> L;

    for(int i=0; i<L; i++){
        int n;
        char c;
        cin >> n >> c;
        R[i].n = n;
        R[i].c = c;
    }
    v.push_back(Point(1,1));
    search(1,1,1);

    cout<<ans<<endl;

    return 0;
}