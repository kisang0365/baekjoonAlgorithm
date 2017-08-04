#include<iostream>
#include<climits>
#include<algorithm>
#include<queue>

using namespace std;

vector<pair<int, int > > v[501];
int dist[501];
int N, M;
bool cycle = false;

void bellman_ford(){

    fill(dist, dist+N+1, INT_MAX);
    dist[1] = 0;

    for(int i=1; i<=N; i++){

        for(int j=1; j<=N; j++){
            
                for(int k=0; k<v[j].size(); k++){
                    int there = v[j].at(k).first;
                    int cost = v[j].at(k).second;

                    if(dist[j] != INT_MAX && dist[j] + cost < dist[there]){
                         dist[there] = dist[j] + cost;
                         if(i == N) cycle = true;
                    }
                }
        }
    }

    return;
}


int main(){

    cin >> N >> M;

    for(int i=0; i<M; i++){
        int A, B, C;
        cin >> A >> B >> C;
        v[A].push_back(make_pair(B, C));
    }

    bellman_ford();

    if(cycle){
        cout<<"-1"<<endl;
    }
    else{
        for(int i=2; i<=N; i++){
            if(dist[i] == INT_MAX) 
                cout<<"-1"<<endl;
            else
                cout<<dist[i]<<endl;
        }
    }

    return 0;
}