#include<iostream>

using namespace std;

int input[11][11] = {0,};
int slash[25] = {0,};
int back_slash[25] = {0,};
int N;
const int dx[4] = {1, 1, -1, -1};
const int dy[4] = {1, -1, 1, -1};
int White_Max = 0;
int Black_Max = 0;

void Check(int y, int x, int cnt, bool flag){

    if(flag == true){
        if(White_Max < cnt) White_Max = cnt;
    }
    else{
        if(Black_Max < cnt) Black_Max = cnt;
    }

    if(x > N){
        y++;
        if(flag == false) x = y%2 == 1 ? 1 : 2;
        else x = y%2 == 0 ? 1 : 2;
    }

    if(y > N) return;

    if(input[y][x] == 1 && slash[x+y] == 0 && back_slash[10+y-x]==0){
        slash[x+y] = 1;
        back_slash[10+y-x] = 1;

        Check(y, x+2, cnt+1, flag);

        slash[x+y] = 0;
        back_slash[10+y-x] = 0;
    }

    Check(y, x+2, cnt, flag);
}



int main(){

    // 2N-1 -> / 대각선일 경우 숫자.
    // 0,0 -> 0  0,1 -> 1 .. 0,4->4 1,4 -> 5. 2,4->6.. r+c;
    // \대각선일 경우
    // 0,4 ->0, 0,3 -> 1, 0,2->2 , 0,1->3, 0,0->4, 1,0->5, .. 0->4
    cin >> N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin >> input[i][j];
        }
    }
    //1,1 체크 ,%2 == 1 일때 1
    Check(1,1,0,false);
    Check(1,2,0,true);

    cout<<White_Max+Black_Max<<endl;
    return 0;
}