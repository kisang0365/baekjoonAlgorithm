#include<iostream>

using namespace std;

int main(){

    int N, M;
    
    cin >> N >> M;

    int leftTable[101][101] = {0, };
    int rightTable[101][101] = {0, };

    for(int i=0; i<M; i++){
        int s, b;
        cin >> b >> s;
        //Table은 b > s인 경우가 있는지 확인. 
        //크고 작음을 표현. 
        leftTable[b][s] = 1;
        rightTable[s][b] = 1;
    }

    for(int k=1; k<=N; k++){

        for(int i=1; i<=N; i++){

            for(int j=1; j<=N; j++){

                if(leftTable[i][k] && leftTable[k][j])
                    leftTable[i][j] = 1;
                if(rightTable[i][k] && rightTable[k][j])
                    rightTable[i][j] = 1;
            }
        }
    }

    for(int i=1; i<=N; i++){
        int ans = 0;
        for(int j=1; j<=N; j++){
            if( leftTable[i][j] == 0 && rightTable[i][j]==0 && i != j) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}