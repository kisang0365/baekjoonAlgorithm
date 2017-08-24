#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int N, K;

    cin >> N >> K;

    bool Prime[10001] = {false, };
    int cnt = 0;
    bool find = false;
    for(int i=2; i<=N; i++){

        if(Prime[i] == false){
            cnt++;
            if(cnt == K){
                cout<<i<<endl;
                find = true;
                break;
            }

            for(int j=2; i*j<=N; j++){
                
                if(Prime[i*j] == false){
                    Prime[i*j] = true;
                    cnt++;

                    if(cnt == K){
                        find = true;
                        cout<<i*j<<endl;
                        break;
                    }
                }
            }
        }
        if(find == true) break;
        
    }


    return 0;
}