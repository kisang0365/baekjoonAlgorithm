#include<iostream>

using namespace std;

int main(){

    int N;
    long long int M;
    int A[10001];
    int cnt = 0;

    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    for(int i=0; i<N; i++){
        
        long long int total = 0;

        for(int j=i; j<N;  j++){
            total += A[j];
            if(total >= M){
                if(total == M) cnt++;
                break;
            } 
        }
    }

    cout<<cnt<<endl;


    return 0;
}