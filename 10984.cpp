#include<iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    while(T--){
        int N;
        double GPA = 0, Total = 0;
        double C, G;
        
        cin >> N;
        for(int i=0; i<N; i++){
            cin >> C >> G;
            Total += C;
            GPA += G*C;
        }
        cout<<fixed;
        cout.precision(0);
        cout<<Total<<' ';
        cout.precision(1);
        cout<<GPA/Total<<endl;

    }


    return 0;
}