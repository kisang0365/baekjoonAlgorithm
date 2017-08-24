#include<iostream>
#include<cmath>

using namespace std;

int N;

bool prime(int n){

    if(n == 1 || n == 0) return false;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;

}

void check(int n, int depth){

    if(depth == N){ 
        cout<<n<<endl;
        return;
    }

    for(int i=0; i<=9; i++){
        int nowNum = n*10+i;
        if(prime(nowNum)){
            check(nowNum, depth+1);
        }
    }
}
int main(){

    cin >> N;

    check(0,0);

    return 0;
}