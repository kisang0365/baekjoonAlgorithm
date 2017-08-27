#include<iostream>
#include<string>

using namespace std;

string str;
string angel;
string devil;

//Dp[i][j] = i : str의 index , j : angel,devil의 index, z : angel or devil;
long long int Dp[22][102][2] = {0, };
bool visit[22][102][2] = {false, };

int find(int a, int b, int c){

    if(visit[a][b][c] == true) return Dp[a][b][c];

    if(a == str.length()) return Dp[a][b][c] = 1;
    else if(b == angel.length() ) return Dp[a][b][c] = 0;

    if(c == 0){
        if(str[a] == devil[b]){
            Dp[a][b][c] += find(a+1, b+1, 1);
        }
        
        Dp[a][b][c] += find(a, b+1, c);
    }

    else{
        if(str[a] == angel[b]){
            Dp[a][b][c] += find(a+1, b+1, 0);    
        }
        Dp[a][b][c] += find(a, b+1, c);
    }

    visit[a][b][c] = true;

    return Dp[a][b][c];

}

int main(){

    //Dp를 한다.
    //
    cin >> str;
    cin >> angel;
    cin >> devil;

    cout<<find(0, 0, 0) + find(0,0, 1)<<endl;



    return 0;
}