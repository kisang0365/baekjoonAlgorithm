#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

const int MAXN = 17;

int N;
int W[MAXN][MAXN];
int Dp[MAXN][1 << MAXN];

//DP[현재 지점][visit한 것들을 체크] = 총 비용.
int search(int s, int visit){

    if(visit == (1 << N )-1 ) return W[s][0];
    
    int& result = Dp[s][visit];

    if( result != -1 ) return result;

    result = 987654321;
    
    for(int next=1; next<N; next++ ){

        if( visit & (1 << next) ) continue;    

        if( W[s][next] == 0 ) continue;

        result = min(result, search( next, visit | (1 << next)) + W[s][next]);        
    }
    
    return result;
}

int main(){

    cin >> N;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> W[i][j];
        }
    }

    for(int i=0; i<N; i++){
        fill(Dp[i], Dp[i] + (1 << N), -1 );
    }

    cout<<search(0, 1)<<endl;
}