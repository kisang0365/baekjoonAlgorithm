#include <iostream>

using namespace std;

int main() {
    
    int T;
    cin >> T;

    while(T--){
        int N;
        int Money[21];
        int Goal;
        int Dp[100001] = {0, };
        Dp[0] = 1;
        cin >> N;
        for(int i=0; i<N; i++)
            cin >> Money[i];
        cin >> Goal;

        for(int i=0; i<N; i++){
            
            for(int j=Money[i]; j<=Goal; j++){
                Dp[j] += Dp[j-Money[i]];
            }
        }
        cout<<Dp[Goal]<<endl;
    }

    return 0;
}