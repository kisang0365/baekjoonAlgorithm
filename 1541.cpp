#include<iostream>
#include<string>
#include<vector>

using namespace std;



int make(string str){

    int ans = 0;
    bool flag = false;
    string num = "";

    for(int i=0; i<str.length(); i++){
        if('0'<=str[i] && str[i]<='9'){
            num += str[i];
        }
        else{
            
            if(flag == false){
                ans += atoi(num.c_str());
            }
            else{
                ans -= atoi(num.c_str());
            }
            num = "";
            if(str[i] == '-'){
                flag = true;
            }
        }
    }

    if(flag == false){
        ans += atoi(num.c_str());
    }
    else{
        ans -= atoi(num.c_str());
    }
    
    return ans;
}

int main(){

    string s;

    cin >> s;

    cout<<make(s)<<endl;

    return 0;
}