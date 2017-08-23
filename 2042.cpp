#include<iostream>
#include<vector>

using namespace std;

#define ll long long

int N, M , K;

class Segment{

public:
    vector<int> number;
    vector<ll> tree;

    Segment(int N){
        number.resize(N+1, 0);
        tree.resize(4*N, 0);
    }

    ll init(int node, int start, int end){

        if(start == end){
            return tree[node] = number[start];
        }

        int mid = (start + end)/2;

        return tree[node] = init(2*node, start, mid) + init(2*node+1, mid+1, end);
    }

    void update(int node, int start, int end, int index, ll diff){

        if(start > index || index > end ){
            return;
        }

        tree[node] += diff;

        if(start != end){
            int mid = (start + end)/2;

            update(2*node, start, mid, index, diff);
            update(2*node+1, mid+1, end, index, diff);
        }
    }

    ll Sum(int node, int start, int end, int left, int right){
        
        if(left > end || right < start) return 0;

        if(left <= start && end <= right){
            return tree[node];
        } 

        int mid = (start+end)/2;

        return Sum(2*node, start, mid, left, right) + Sum(2*node+1, mid+1, end, left, right);
    }

};


int main(){

    //N : 수의 갯수. M : 수의 변경이 일어남. K : 구간의 합을 구하는 횟수.
    cin >> N >> M >> K;

    Segment Tree(N);

    for(int i=1; i<=N; i++){
        cin >> Tree.number[i];
    }
    
    //make SegTree;
    Tree.init(1, 1, N);

    int a, b, c;

    for(int i=1; i<=M+K; i++){
        
        cin >> a >> b >> c;
        //변경
        if(a == 1){
            Tree.update(1, 1, N, b, c - Tree.number[b]);
            Tree.number[b] = c;
        }
        //구간합 출력.
        else{
            cout<<Tree.Sum(1, 1, N, b, c)<<endl;
        }

    }

    return 0;
}