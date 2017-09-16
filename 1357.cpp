#include<iostream>

using namespace std;

int Rev(int X){

    int cnt = 1;
    int trans = 0;
    while(X > 0){
        trans*=10;
        trans+=(X%10);
        X/=10;
    }
    return trans;
}



int main(){

    int X, Y;
    cin >> X >> Y;
    cout<< Rev(Rev(X)+Rev(Y))<<endl;

    return 0;
}