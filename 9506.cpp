#include<iostream>
#include<vector>
using namespace std;

void perfectNumber(int n){

    int sum = 0;
    vector<int> v;

    for(int i=1; i<=n/2; i++){
        if(n%i == 0){
          sum += i;
          v.push_back(i);  
        } 
    }

    if (sum == n) {
        cout<<n<<" = ";
        for(int i=0; i<v.size()-1; i++){
            cout<<v[i]<<" + ";
        }
        cout<<v[v.size()-1]<<endl;
    }
    else{
        cout<<n<<" is NOT perfect."<<endl;
    }
}


int main(){

    while(1){
        int n;
        cin >> n;
        
        if(n == -1) break;

        perfectNumber(n);
    }


    return 0;
}