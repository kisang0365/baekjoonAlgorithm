#include<iostream>
#include<algorithm>
using namespace std;

int N;
int secondArray[101] = {0, };
bool firstArray[101] = {false, };
bool tempArray[101] = {false, };
//s : start Num, n : now Num

//사이클이 생기는 것이면 true, 아닐경우 false. 
bool dfs(int s, int n){

    int second = secondArray[n];
    tempArray[n] = true;

    if(s == second){
        return true;
    } 

    //이미 사이클 있는것인데 지금 들어온 숫자가 포함이 안됨.
    if(tempArray[second] == true){
        return false;
    }

    return dfs(s, second);
}

int main(){

    cin >> N;


    for(int i=1; i<=N; i++){
        cin >> secondArray[i];
    }   
    
    int ans = 0;
    //사이클이 생기면 집합을 만들수 있다.
    for(int i=1; i<=N; i++){

        //temp 초기화.
        for(int j=1; j<=N; j++)
            tempArray[j] = firstArray[j];
        
        if(dfs(i,i)){
            for(int j=1; j<=N; j++){
                firstArray[j] = tempArray[j];
            }
        }

        if(firstArray[i] == true){ 
            ans++;
        }
    }

    cout<<ans<<endl;

    for(int i=1; i<=N; i++){
        if(firstArray[i] == true) cout<<i<<endl;
    }



    return 0;
}