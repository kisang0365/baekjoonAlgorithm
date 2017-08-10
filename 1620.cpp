#include<iostream>
#include<string>
#include<map>
#include<cstdio>

using namespace std;

int N, M;
string Q;
string v[100001];
int main(){

    std::ios::sync_with_stdio(false);
    scanf("%d %d", &N, &M);
    
    map<string, int> Dogam;
    for(int i=1; i<=N; i++){
        char c[50];
        scanf("%s", c);
        string s = c;
        Dogam[s] = i;
        v[i] = s;
    }

    for(int i=0; i<M; i++){
        char c[50];
        scanf("%s", c);
        Q = c;

        if(Q.at(0) <= '9'){
            printf("%s\n", v[stoi(Q)].c_str());
        }
        else{
            printf("%d\n", Dogam[Q]);
        }
    }

    return 0;
}