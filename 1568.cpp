#include<iostream>

using namespace std;

int main(){

    int bird;
    cin >> bird;

    int second = 1;
    int ans = 0;
    while(bird > 0){

        if(bird >= second){
            bird -= second;
            second++;
            ans++;
        }
        else{
            second = 1;
        }
    }

    cout<<ans<<endl;

    return 0;
}