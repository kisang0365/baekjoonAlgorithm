#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int V[101] = {0, };
int N, S, M;
int Dp[101][1001];
int Max = -1;

//Dp[index][n] = (현재 자리에서 올 수 있는 최고 큰 값);
//Dp의 index가 N+1번째면 그전까지 온 숫자를 반환.
//만일 Dd[index][n]위치를 벌써 계산했다면, 그 대로 반환.
//메모이제이션.

int find(int index, int n){
    
    if(index == N+1)
        return n;

    if(Dp[index][n] != -2){
        return Dp[index][n];
    }

    int first = -1;
    int second = -1;

    if(n+V[index] <= M){
        Dp[index][n] = find(index+1, n+V[index]);
    }

    if(n-V[index] >= 0){
        first = n - V[index];
        second = find(index+1, first);
    }
    
    if(second > Dp[index][n]) Dp[index][n] = second;

    return Dp[index][n];
    
}



int main(){

    cin >> N >> S >> M;

    for(int i=1; i<=N; i++){
        fill(Dp[i], Dp[i]+M+1, -2);
    }

    for(int i=1; i<=N; i++){
        cin >> V[i];
    }
    //DP를 함.
    cout<<find(1, S)<<endl;

    return 0;
}