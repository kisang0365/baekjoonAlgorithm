#include<iostream>

using namespace std;

int Max = 0;
int N;

void array_copy(int Original[][21], int temp[][21]){
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            temp[i][j] = Original[i][j];
        }
    }
}

void simulation(int Original[][21], int cnt){

    //위 아래 우측 좌측. 
    int temp[21][21];

    array_copy(Original, temp);
    //좌측 모으기.
    
    for(int i=0; i<N; i++){
        int now = 0;
        int curNum= -1;

        for(int j=0; j<N; j++){

            if(temp[i][j] == 0){
                continue;
            }
            else if(curNum == -1){
                curNum = temp[i][j];
                temp[i][j] = 0;
                temp[i][now] = curNum;
            }
            else if(temp[i][now] == temp[i][j]){
                curNum = -1;
                temp[i][now] += temp[i][j];
                temp[i][j] = 0;
                Max = Max > temp[i][now] ? Max : temp[i][now]; 
                now++;
            }
            else{
                curNum = temp[i][j];
                temp[i][j] = 0;
                now++;
                temp[i][now] = curNum;
            }
        }
    }
    if(cnt < 5) simulation(temp, cnt+1);

    array_copy(Original, temp);
    //위로 모으기.
    for(int j=0; j<N; j++){
        int now = 0;
        int curNum = -1;
        for(int i=0; i<N; i++){

            if(temp[i][j] == 0){
                continue;
            }
            else if(curNum == -1){
                curNum = temp[i][j];
                temp[i][j] = 0;
                temp[now][j] = curNum;
            }
            else if(temp[now][j] == temp[i][j]){
                curNum = -1;
                temp[now][j] += temp[i][j];
                temp[i][j] = 0;
                Max = Max > temp[now][j] ? Max : temp[now][j]; 
                now++;
            }
            else{
                curNum = temp[i][j];
                temp[i][j] = 0;
                now++;
                temp[now][j] = curNum;
            }
        }
    }
    if(cnt < 5) simulation(temp, cnt+1);
    
    array_copy(Original, temp);
    //우측 모으기.
    for(int i=0; i<N; i++){
        int now = N-1;
        int curNum = -1;

        for(int j=N-1; j>=0; j--){

            if(temp[i][j] == 0){
                continue;
            }
            else if(curNum == -1){
                curNum = temp[i][j];
                temp[i][j] = 0;
                temp[i][now] = curNum;
            }
            else if(temp[i][now] == temp[i][j]){
                curNum = -1;
                temp[i][now] += temp[i][j];
                temp[i][j] = 0;
                Max = Max > temp[i][now] ? Max : temp[i][now]; 
                now--;
            }
            else{
                curNum = temp[i][j];
                temp[i][j] = 0;
                now--;
                temp[i][now] = curNum;
            }
        }
    }
    if(cnt < 5) simulation(temp, cnt+1);

    array_copy(Original, temp);
    //아래측 모으기.
    for(int j=0; j<N; j++){
        int now = N-1;
        int curNum = -1;
        for(int i=N-1; i>=0; i--){

            if(temp[i][j] == 0){
                continue;
            }
            else if(curNum == -1){
                curNum = temp[i][j];
                temp[i][j] = 0;
                temp[now][j] = curNum;
            }
            else if(temp[now][j] == temp[i][j]){
                curNum = -1;
                temp[now][j] += temp[i][j];
                temp[i][j] = 0;
                Max = Max > temp[now][j] ? Max : temp[now][j]; 
                now--;
            }
            else{
                curNum = temp[i][j];
                temp[i][j] = 0;
                now--;
                temp[now][j] = curNum;
            }
        }
    }
    if(cnt < 5) simulation(temp, cnt+1);

    return;
}


int main(){

    int Board[21][21] = {0, };
    cin >> N;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> Board[i][j];
            if(Board[i][j] > Max)
                Max = Board[i][j];
        }
    }
    simulation(Board, 1);
    cout<<Max<<endl;

    return 0;
}