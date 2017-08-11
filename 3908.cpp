#include<iostream>
#include<vector>
using namespace std;

int ans;
bool noPrime[1121] = {false, };
int Dp[1121][15] = {0,};
vector<int> v;

void init(){

    for(int i=2; i<=1120/2; i++){
       if(noPrime[i] == false){
           for(int j=2; i*j<=1120; j++){
                noPrime[i*j] = true;
           }
       } 
    }
    for(int i=2; i<=1120; i++){
        if(noPrime[i] == false) v.push_back(i);
    }

    Dp[0][0] = 1;
    
    for(int i=0; i<v.size(); i++){
       
        for(int j=1120; j>=v[i]; j--){
            for(int k=1; k<=14; k++){
                Dp[j][k] += Dp[j-v[i]][k-1];
            }
        }

    }

}

int main(){

    int T;
    cin >> T;

    init();
    int n, k;

    while(T--){

        cin >> n>> k;

        cout<<Dp[n][k]<<endl;

    }


    return 0;
}