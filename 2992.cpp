#include<iostream>

using namespace std;

bool check(int X, int n){

    int Arr[10] = {0, };
    int Brr[10] = {0, };

    int cnt = 0;
    while(X > 0){
        Arr[X%10]++;
        X/=10;
    }
    while(n > 0){
        Brr[n%10]++;
        n/=10;
    }

    for(int i=0; i<=9; i++){
        if(Arr[i] != Brr[i]) return false;
    }

    return true;
}


int main(){

    int X;
    cin >> X;

    for(int i = X+1; i<=X*10; i++){
        if(check(X,i)){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<"0"<<endl;

    return 0;
}