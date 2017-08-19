#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;
    int ansJOI = 0;
    int ansIOI = 0;
    cin >> str; 

    for(int i=0; i<str.length()-2; i++){
        string sub = str.substr(i,3);
        if(sub == "JOI") ansJOI++;
        if(sub == "IOI") ansIOI++;
    }  
    cout<<ansJOI<<endl<<ansIOI<<endl;

}