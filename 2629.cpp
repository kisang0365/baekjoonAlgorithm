#include<iostream>

using namespace std;

int cn, gn;
int cw[33] = {0, };
int gw[10] = {0, };

bool Dp[30001] = {false, };
bool temp[30001] = {false, };

void find(){

    Dp[15000] = temp[15000] = true;
    for(int i=0; i<cn; i++){
        
        int x = cw[i];

        for(int j=0; j<30001; j++){
            
            if(Dp[j]==true){
                temp[j+x] = true;
                temp[j-x] = true;
            }
        }
        for(int j=0; j<30001; j++){
            Dp[j] = temp[j];
        }

    }


}

//뺏을떄, 옆으로 옮겼을떄, 안뺏을떄.

int main(){

    cin >> cn;

    for(int i=0; i<cn; i++){
        cin >> cw[i];
    }
    
    find();
    
    cin >> gn;
    
    for(int i=0; i<gn; i++){
       
        cin >> gw[i];

        if(i >= 1) cout<<' ';

        if(gw[i] <= 15000 && Dp[gw[i]+15000]){
            cout<<"Y";
        }
        else{
            cout<<"N";
        }
    }

    return 0;
}