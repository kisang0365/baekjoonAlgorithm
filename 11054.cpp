#include<iostream>
using namespace std;

int main(){

    int DpIncrese[1001] = {0, };
    int DpDecrease[1001] = {0, };
    int Arr[1001] = {0, };
    int flag[1001] = {false, };

    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> Arr[i];
    }

    for(int i=0; i<T; i++){
        DpIncrese[i] = 1;
        for(int j=0; j<i; j++){
            if(Arr[i] > Arr[j] && DpIncrese[i] < DpIncrese[j]+1){
                DpIncrese[i] = DpIncrese[j]+1;
            }
        }
    }

    for(int i=T-1; i>=0; i--){
        DpDecrease[i] = 1;
        for(int j=T-1; j>i; j--){
            if(Arr[i] > Arr[j] && DpDecrease[i] < DpDecrease[j]+1){
                DpDecrease[i] = DpDecrease[j]+1;
            }
        }
    }
    int Max = 0;
    for(int i=0; i<T; i++){
        cout<<DpIncrese[i]<<' '<<DpDecrease[i]<<endl;
        int num = DpIncrese[i] + DpDecrease[i];
        if(Max < num) Max = num;
    }
    cout<<Max-1<<endl;


    return 0;
}