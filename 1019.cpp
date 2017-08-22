#include<iostream>
#include<cmath>
using namespace std;

long long int Arr[10] = {0, } ;

void calc(int Num, int calc){

    while(Num > 0){
        Arr[Num%10] += calc;
        Num /= 10;
    }

}

int main(){

    int N;
    cin >> N;

    int start = 1;
    int End = N;
    int cnt = 1;
    while(1){
        
        //끝자리 9 만들기.
        while(End%10 != 9 && start<=End){
            calc(End, cnt);
            End--;
        }

        if(start > End) break;
        
        //끝자리 0 만들기.
        while(start%10 != 0 && start<=End){
            calc(start, cnt);
            start++;
        }

        if(start > End) break;

        start /= 10;
        End/=10;

        for(int i=0; i<10; i++){
            Arr[i] += (End-start+1)*cnt; 
        }
        cnt*=10;
    }

    for(int i=0; i<10; i++){
        cout<<Arr[i]<<' ';
    }

    return 0;
}