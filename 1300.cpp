#include<iostream>
#include<cmath>

using namespace std;

long long int search(long long int N, long long int k){

    long long int left = 1;
    long long int right = N*N;

    while(left <= right){
        long long int mid = (left+right)/2;
        long long int cnt = 0;
        for(long long int i=1; i<=N; i++){
            cnt += min(mid/i, N);
        }
        
        if(k <= cnt){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return left;
}


int main(){

    long long int N;
    long long int k;

    cin >> N >> k;

    cout<<search(N, k)<<endl;

}