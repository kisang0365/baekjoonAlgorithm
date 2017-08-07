#include<iostream>

using namespace std;

int main(){

    int N;
    cin >> N;

    int sum = 1;
    for(int i=1; i<=N; i++){

        sum += i*3+1;
        if(sum >= 45678) sum = sum%45678;

    }
    cout<<sum<<endl;
    
    return 0;
}