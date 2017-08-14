#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

struct Node{
    int s;
    int e;
    int diff;
    
    Node(int s = 0, int e= 0){
        this->s = s;
        this->e = e;
        diff = abs(s-e);
    }
};

bool comp(Node a, Node b){
    return a.diff < b.diff;
}

bool Available[40001] = {false, };

int main(){

    int n;
    cin >> n;
    Node node[40001];

    for(int i=1; i<=n; i++){
        int destination;
        cin >> destination;
        node[i] = Node(i,destination);
    }
    sort(node+1, node+n, comp);
    int ans = 0;

    for(int i=1; i<=n; i++){
        int B = max(node[i].s, node[i].e);
        int S = min(node[i].s, node[i].e);
        bool Ok = true;

        for(int j=S; j<=B; j++){
            if(Available[j] == true){
                Ok = false;
                break;
            }
        }

        if(Ok == true){
            for(int j= S; j<=B; j++){
                Available[j] = true;
            }
            ans++;
        }
    }
    cout<<ans<<endl;
}