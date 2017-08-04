#include<iostream>
#include<string>
using namespace std;

void print(string str1, string str2){

    cout<<"Distances: ";

     for(int i=0; i<str1.length(); i++){
        int n1 = str1[i] - 'A' + 1;
        int n2 = str2[i] - 'A' + 1;

        if(n2 >= n1) cout<<n2-n1<<' ';
        else{
            cout<<n2+26-n1<<' ';
        }
    }
    cout<<endl;
}


int main(){

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        string str1, str2;
        cin >> str1 >> str2;

        print(str1, str2);

    }

    return 0;
}