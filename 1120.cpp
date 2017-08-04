#include<iostream>
#include<string>
using namespace std;

int comp(string s1, string s2){
    int ans = 0;
    for(int i=0; i<s1.length(); i++){
        if( s1[i] != s2[i] ) ans++;
    }
    return ans;
}

int main(){

    string str1, str2;
    int ans = 10000;
    cin >> str1 >> str2;
    for(int i=0; i<=str2.length() - str1.length(); i++){     
        int cnt = comp(str1, str2.substr(i, str1.length()));
        ans = ans >cnt ? cnt : ans;
    }
    cout<<ans<<endl;

    return 0;
}