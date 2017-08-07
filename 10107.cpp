#include<iostream>

using namespace std;

int main(){

    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;

    int X = A * P;
    int diff = 0;
    
    if(P > C) diff = P - C;

    int Y = B + (D * diff);

    int ans = X > Y ? Y : X;
    cout<<ans<<endl;




    return 0;
}