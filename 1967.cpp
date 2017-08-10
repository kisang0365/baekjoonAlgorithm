#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>

using namespace std;

struct Node{

    int next;
    int value;
    int dir;

    Node(int next=0, int value=0, int dir=0){
        this->next= next;
        this->value = value;
        this->dir = dir;
    }
};

vector<Node> node[10001];
int ans[10001] = {0,};
int Max = 0;

int bfs(int n){

    queue<Node> q;
    fill(ans, ans + node[n].size(), 0);

    for(int i=0; i<node[n].size(); i++){
        q.push(Node(node[n].at(i).next, node[n].at(i).value, i));
    }

    while(!q.empty()){

        Node cur = q.front();
        q.pop();

        int curPos = cur.next;
        int v = cur.value;
        int d = cur.dir;

        if(node[curPos].size() == 0){
            ans[d] = ans[d] < v ? v : ans[d];
        }
        else{

            for(auto temp : node[curPos]){
                q.push(Node(temp.next, v+temp.value, d));
            }
        }
    }
    sort(ans, ans+node[n].size(), greater<int>());
    
    return ans[0] + ans[1];

}

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n-1; i++){

        int P, C, V;
        cin >> P >> C >> V;

        node[P].push_back(Node(C, V, 0));
    }

    
    for(int i=1; i<=n; i++){
        int t = bfs(i);
        Max = Max > t ? Max : t;
    }

    cout<<Max<<endl;
    return 0;
}