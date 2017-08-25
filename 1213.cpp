#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    int Arr[26] = {0, };

    string str;
    cin >> str;

    for(int i=0; i<str.length(); i++){
        Arr[str[i]-'A']++;
    }
    int cnt = 0;
    int index = -1;
    str = ""; 
    for(int i=0; i<26; i++){
        
        if(Arr[i]%2 == 0){
            
            for(int j=0; j<Arr[i]/2; j++){
                str += (i+'A');
            }
        }
        else{
            cnt++;

            for(int j=0; j<Arr[i]/2; j++){
                str += (i+'A');
            }

            index = i;
        }
    }
    if(cnt>1) cout<<"I'm Sorry Hansoo"<<endl;
    else {
        string back = str;
        reverse(str.begin(), str.end());

        if(cnt == 1){
            back = back + (char)('A'+index) + str; 
        }
        else{ 
            back = back+ str;
        }
            cout<<back<<endl;
    }



    return 0;
}