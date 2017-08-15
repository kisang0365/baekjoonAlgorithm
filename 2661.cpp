#include<iostream>
#include<string>

using namespace std;

string s = "";
int ok = false;
int N;
//cnt는 현재 자릿수. 

void dfs(char c, int cnt){

    if(cnt == N+1){
        ok = true;
        return;
    }
    
    s += c;

    int size = cnt/2;

    for(int i=1; i<=size; i++){
        
        string a = s.substr(cnt-i, i);
        string b = s.substr(cnt-i*2, i);
        
        if(a == b){
            s.erase(cnt-1);
            return;  
        } 
    }

    for(int i=1; i<=3; i++){
        if(ok == false) dfs(i+'0', cnt+1);
    }

    if(ok == false) s.erase(cnt-1);
}

int main(){

    cin >> N;

    for(int i=1; i<=3; i++){
        if(ok == false) 
            dfs(i+'0', 1);
    }
    cout<<s<<endl;
    return 0;
}