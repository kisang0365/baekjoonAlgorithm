#include<iostream>
#include<string>

using namespace std;

void reverse(string s1, string &s2){

    string temp = "";
    for(int i=s1.length()-1; i>=0; i--){
        temp += s1[i];
    }
    s2 = temp;
}


int main(){

    int  N;
    string str[101];
    string reverse_str[101];

    cin >> N;
    bool Ok = false;
    for(int i=0; i<N; i++){
        cin >> str[i]; 
        reverse(str[i], reverse_str[i]);
    }

    bool find = false;
    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(str[i].compare(reverse_str[j]) == 0){
                cout<<str[i].length()<<" ";
                cout<<str[i][str[i].length()/2]<<endl;
            }
        }
        if(find) break;
    }

    return 0;
}