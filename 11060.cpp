#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){

    int N;
    //얼마나 떨어진지 거리. 
    int A[1001];
    //dist는 i번째에 도착할때까지 최소의 점프수 . 
    int dist[1001];

    fill(dist, dist+1001, 1001);

    cin >> N;

    for(int i=1; i<=N; i++){
        cin >> A[i];
    }
    dist[1] = 0;
    for(int i=1; i<N; i++){
        if(dist[i] <= 1000){
            int nextMax = i + A[i];
            //nextMax 가 1000을 넘어갈수도 있음. 
            if(nextMax > 1000) nextMax = 1000;
            
            for(int j=1; j<=nextMax; j++){
                dist[j] = min(dist[i]+1, dist[j]);
            }
        }
    }
    if(dist[N] > 1000) cout<<"-1"<<endl;
    else cout<<dist[N]<<endl;

    return 0;
}