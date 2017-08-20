#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

 //직원 person[i]가 할수 있는 일.
vector<int> person[1003];
//일을하는 사람의 번호.
int work[1003] = {0, };
bool visit[1003] = {0 };

int isOk(int p){

    if(visit[p] == true) return 0;

    visit[p] = true;

    for (int w : person[p]) {

        if( work[w] == 0 || isOk(work[w]) == true){
            work[w] = p;
            return 1;
        }
    }

    return 0;
}

int main(){
    int N, M;
    int ans = 0;

    cin >> N >> M;

    for(int i=1; i<=N; i++){
        int cnt;
        cin >> cnt;
        for(int j=1; j<=cnt; j++){
            int go;
            cin >> go;
            person[i].push_back(go);
        }

        fill(visit, visit+1003, false);
        ans += isOk(i);
    }

    cout<<ans<<endl;

    return 0;
}