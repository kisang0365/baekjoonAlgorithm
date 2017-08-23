#include<iostream>

using namespace std;

int main(){

    int N;
    int r, e, c;
    
    cin >> N;
    
    for(int i=0; i<N; i++){
        // r: 광고 x , e 광고 했을때 수익 , c광고 비용. 
        cin >> r >> e >> c;
        
        if(r == e - c) cout<<"does not matter"<<endl;
        else if (r < e-c) cout<<"advertise"<<endl;
        else cout<<"do not advertise"<<endl;
        
    }

}