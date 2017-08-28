#include<iostream>

using namespace std;

int Top[5000001] = {0, };
int Bottom[500001] = {0, };
int Max = 0;
int Total = 0;
int N, H;

int main(){

    cin >> N >> H;
    Max = N+1;
    for(int i=0; i<N/2; i++){
        int H1, H2;
        cin >> H1 >> H2;
        Bottom[H1] += 1;
        Top[H - H2 + 1] += 1;
    }
   //3 == 5 - 
    for(int i=H-1; i>0; i--){
        Bottom[i-1] += Bottom[i];
    }
    for(int i=1; i<H; i++){
        Top[i+1] += Top[i];
    }

    for(int i=1; i<=H; i++){
        if(Top[i] + Bottom[i] < Max){
            Max = Top[i] + Bottom[i];
            Total = 1;
        }
        else if(Top[i] + Bottom[i] == Max){
            Total++;
        }
    }

    cout<<Max<<" "<<Total<<endl;
    return 0;
}