#include<iostream>

using namespace std;

int C, R;
int K;
int Arr[1001][1001] = {0, };
int dir = 0;

long long int Num = 1;

int x;
int y;

void up(){
    if( y - 1 == 0 || Arr[y-1][x] != 0){
        dir = 1;
        x++;
    }
    else{
        y--;
    }
}

void right(){
    
    if( x + 1 > R || Arr[y][x+1] != 0){
        dir = 2;
        y++;
    }
    else{
        x++;
    }
}

void down(){
    if( y + 1 > C || Arr[y+1][x] != 0){
        dir = 3;
        x--;
    }
    else{
        y++;
    }
}

void left(){
    
    if( x - 1 == 0 || Arr[y][x-1] != 0){
        dir = 0;
        y--;
    }
    else{
        x--;
    }
}

int main(){

    cin >> R >> C >> K;

    x = 1;
    y = C;

    if(K > C*R) {
        cout<<"0"<<endl;
        return 0;
    }

    while(1){
        
        if(Arr[y][x] != 0) break;

        Arr[y][x] = Num++;
        
        if(Num-1 == K){
            int ansY = C + 1 - y;
            cout<<x<<" "<<ansY<<endl;
            break;  
        }

        if(dir == 0){
            up();
        }
        else if(dir == 1){
            right();
        }
        else if(dir == 2){
            down();
        }
        else{
            left();
        }
    }

    return 0;
}