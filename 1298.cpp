#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> person[101];
int noteBook[5001] = {0, };
bool visit[101] = {false, };


int mach(int p){

    if(visit[p] == true) return 0;

    visit[p] = true;

    for(int note : person[p]){

        if(noteBook[note] == 0 || mach(noteBook[note]) == 1){
            noteBook[note] = p;
            return 1;
        }
    }

    return 0;
}


int main(){

    int N, M;
    cin >> N >> M;

    for(int i=0; i<M; i++){
        int a, b;
        cin >> a >> b;
        person[a].push_back(b);
    }
    int ans = 0;
   
    for(int i=1; i<=N; i++){
        fill(visit, visit+101, false);
        ans += mach(i);
    }

    cout<<ans<<endl;

    return 0;
}