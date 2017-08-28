#include<iostream>
#include<queue>
#include<cstdio>
using namespace std;

#define ll long long int
//심사대 N개 , 인원 M명.
int N, M;
ll Cost[100001] = {0, };

ll find(ll left, ll right){ 

    ll mid;

    while(1){

        if(left == right) return left;
        
        mid = (left+right)/2;
        ll cnt = 0;
        for(int i=0; i<N; i++){
            cnt += mid/Cost[i];
        }

        if(cnt >= M){
            right = mid;
        }
        else{
            left = mid+1;
        }
    }

    return left;
}

int main(){

    cin >> N >> M;

    ll Min = 1000000000;
    for(int i=0; i<N; i++){
        scanf("%lld", &Cost[i]);
        if(Cost[i] < Min) Min = Cost[i];
    }
    
    cout<<find(1, Min*M)<<endl;
}