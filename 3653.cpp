#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int n,m;


class Segment{

public:
    vector<int> video;
    vector<int> tree;

    Segment(int n, int m){
        video.resize(n+1, 0);
        tree.resize(4*(n+m), 0);

        for(int i=1; i<=n; i++){
            video[i] = m+i;
        }
    }

    int init(int node, int start, int end){

        if(start == end){
            if(start > m){
                tree[node] = 1;
            }
            return tree[node];
        }

        int mid = (start+end)/2;

        return tree[node] = init(node*2, start, mid) + init(node*2+1, mid+1, end);

    }

    void update(int node, int start, int end, int index, int diff){
        
        if(start > index || end < index) return;
        
        tree[node] += diff;

        if(start!=end){
            
            int mid = (start+end)/2;
            update(node*2, start, mid, index, diff);
            update(node*2+1, mid+1, end, index, diff);

        }
        return;
    }

    int Sum(int node, int start, int end, int left, int right){

        if(end < left || start > right){
            return 0;
        }

        if(left <= start && end <= right){
            return tree[node];
        }

        int mid = (start+end)/2;

        return Sum(node*2, start, mid, left, right) + Sum(node*2+1, mid+1, end, left, right);

    }


};

int main(){

    int T;
    cin >> T;

    while(T--){

        scanf("%d %d", &n, &m);

        Segment Tree(n,m);

        Tree.init(1, 1, n+m);

        for(int i=0; i<m; i++){
            int vn;
            scanf("%d", &vn);
            
            //1부터 video의 위치까지의 덧셈.
            printf("%d\n", Tree.Sum(1, 1, n+m, 1, Tree.video[vn]) - 1);
            Tree.update(1,1, n+m, Tree.video[vn], -1);
            Tree.update(1,1, n+m, m-i, 1);
            Tree.video[vn] = m-i;
            //video를 위로 뻇으므로, vedeo가 있던위치의 값을 1에서 0으로 변경.
            //그 후 video는 m-i번째에 꽂히므로 그 위치를 video에 저장.
            // 그 후 video가 꽂힌 자리를 0 에서 1로 변경. 

        }

    }



    return 0;
}