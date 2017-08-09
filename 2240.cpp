#include<iostream>
#include<cmath>
using namespace std;

int Dp[31][1001] = {0, };
int Board[1001] = {0, };

int main(){

    int T, W;
    cin >> T >> W;

    for(int i=1; i<=T; i++){
        cin >> Board[i];
    }
    int cnt = 0;
    for(int j=1; j<=T; j++){
        if(Board[j] == 1){
            cnt++;
            Dp[0][j] = cnt;
        }
    }
    int ans = 0;
    for(int i=1; i<=W; i++){
        for(int j=1; j<=T; j++){
            
            //현재 방향 1
            if(i%2 == 0){
                //들어온 값이 1
                if(Board[j] == 1){
                    Dp[i][j] = max(Dp[i-1][j-1]+1, Dp[i][j-1]+1);
                }
                //들어온 값이 2
                else{
                    Dp[i][j] = max(Dp[i-1][j], Dp[i][j-1]);
                }
            }
            //현재 방향 2.
            else{
                if(Board[j] == 2){
                    Dp[i][j] = max(Dp[i-1][j-1]+1, Dp[i][j-1]+1);
                }
                else{
                    Dp[i][j] = max(Dp[i-1][j], Dp[i][j-1]);
                }
            }
            ans = max(ans, Dp[i][j]);
        }
    }   
    cout<<ans<<endl;

    return 0;
}