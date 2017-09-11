#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int MAX = 20;
int Num = 1 << MAX;

void add(){

    int n;
    cin >> n;
    if( (Num & ( 1 << n) ) == 0) Num += (1<<n); 
}

void remove(){
    
    int n;
    cin >> n;

    if(Num & ( 1 << n) ) Num -= (1<< n );
}

void check(){
    int n;
    cin >> n;

    if(Num & ( 1 << n) ) printf("1\n");
    else printf("0\n");
}

void toggle(){
    int n;
    cin >> n;

    if(Num & ( 1 << n) ) Num -= (1<<n);
    else Num += (1<<n);  
}

void all(){
    
    Num = (Num | ( (1 << MAX) - 1)   );
}
void empty(){
    Num = Num & (1 << MAX);
}

int main(){
    
    std::ios_base::sync_with_stdio(false);
    
    int M;
    cin >> M;

    for(int i=0; i<M; i++){

        string str;
        cin >> str;
        if(str == "add"){
            add();
        }
        else if(str == "remove"){
            remove();
        }
        else if(str == "check"){
            check();
        }
        else if(str == "toggle"){
            toggle();
        }
        else if(str == "all"){
            all();
        }
        else{
            empty();
        }
    }

    return 0;
}