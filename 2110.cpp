#include<iostream>
#include<algorithm>
using namespace std;

long long int Home[200001];

int main(){

    int N, M;

    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> Home[i];
    }

    sort(Home, Home+N);

    int left = 0;
    int right = Home[N-1];

    while(left <= right){

        long long int mid = (left+right)/2;
        long long int cur = Home[0];
        int cnt = 0;
        for(int i=1; i<N; i++){
            int diff = Home[i]-cur;
            if(diff >= mid){
                cnt++;
                cur = Home[i];
            }
        }
        
        if(M-1 <= cnt){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<left-1<<endl;
//1 2 4 8 9  5 -> 1. 
//4->cnt = 1, 1 -> cnt=4 , 
    return 0;
}