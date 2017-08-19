#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>

using namespace std;

int dist[10001];
int N, M;
int A, B, C;
vector<pair<int, int> > adj[10001];

int dijstra(int S, int E){

    fill(dist, dist+10001, -1);

    priority_queue<pair<int, int> > q;
    //큰 순서로 출력하는 priorityheap;
    q.push(make_pair(0, S));
    dist[S] = 0;

    while(!q.empty()){

        int cur_weight = q.top().first;
        int cur_num = q.top().second;
        q.pop();

        if(cur_num == E) return cur_weight;

        for(int i=0; i<adj[cur_num].size(); i++){
            int next = adj[cur_num][i].first;
            int weight = adj[cur_num][i].second;   

                //dist는 여기까지 올떄 최대 들수있는 값. 
                //간적 없을땐 최대무게 만큼 들고가자.
                if( dist[next] == -1){
                    if(cur_weight == 0) dist[next] = weight;
                    else
                        dist[next] = min(weight, cur_weight);
                    q.push(make_pair(dist[next], next));
                }

                //현재 dist값이 next의 dist값보다 클 경우. 
                else if(dist[cur_num] > dist[next]){
                    //둘 중 작은 수 만큼만 보낼수 있으므로. 
                    dist[next] = min(dist[cur_num],weight);
                    q.push(make_pair(dist[next],next));
                }
                
        }
    }
    return dist[E];
}

int main(){

    //N개섬 , M개 간선
    cin >> N >> M;
    int S, E;

    //다리생성
    for(int i=0; i<M; i++){
        cin >> A >> B >> C;
        adj[A].push_back(make_pair(B,C));
        adj[B].push_back(make_pair(A,C));
    }

    cin >> S >> E;

    cout<<dijstra(S,E)<<endl;


    return 0;
}