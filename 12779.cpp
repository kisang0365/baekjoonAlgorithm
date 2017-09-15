#include<iostream>
#include<cmath>
using namespace std;

long long int gcd(long long int mo, long long int za){

    if(za == 0) return mo;

    return gcd(za, mo%za);
}


int main(){

    long long int a, b;

    cin >> a >> b;

    long long int minC = (int)sqrt(a);
    long long int maxC = (int)sqrt(b);


    long long int mo = b - a;
    long long int za = maxC- minC;

    if(za == 0) cout<<"0"<<endl;
    else{
        long long int G = gcd(mo, za);
        cout<<za/G<< "/"<<mo/G<<endl;
    }
}