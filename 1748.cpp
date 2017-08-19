#include<iostream>

using namespace std;

int main(){

    int N;
    long long int init = 10;
    long long int cnt = 1;
    long long int sum = 0;

    cin >> N;

    while(1){

        if(N >= init){
            sum = sum + cnt*(init - init/10);
            cnt++;
            init*=10;
        }
        else{
            sum = sum + cnt*(N - init/10 + 1);
            break;
        }

    }

    cout<<sum<<endl;

    return 0;
}