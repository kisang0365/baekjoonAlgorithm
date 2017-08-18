#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){

    int n;
    set<string> s;

    cin >> n;

    for(int i=0; i<n; i++){
        string name, inout;
        cin >> name >> inout;

        if(inout == "enter"){
            s.insert(name);
        }
        else{
            s.erase(name);
        }
    }
    set<string>::reverse_iterator iter;
    for(iter = s.rbegin(); iter != s.rend(); iter++){
        cout<<*iter<<endl;
    }

    return 0;
}