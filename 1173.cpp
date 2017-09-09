#include<iostream>

using namespace std;

int main(){

    //N = 운동 분
    //m = 최소
    // M = 최대
    // T 는 증가량
    // R 은 감소량. 
    int N, m , M , T , R;

    cin >> N >> m >> M >> T >> R;

    int cnt = 0;
    int time = 0;
    int mac = m;
    while(cnt < N){
        time++;
        if(mac + T <= M){
            mac += T;
            cnt++;
        } 
        else{
            mac -= R;
            if(mac < m) mac = m;
        }

        if(time > 40000){
            time = -1;
            break;
        }
    }

    cout<<time<<endl;


    return 0;
}