#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Node{
    int table;
    int time;

    Node(int table, int time){
        this->table = table;
        this->time = time;
    }
};

bool comp(Node a, Node b){
    if(a.time < b.time) return true;
    else if(a.time == b.time){
        if(a.table < b.table) return true;
        else return false;
    }
    else return false;
}

int main(){

    int N, M;
    
    vector<Node> v;
    vector<Node>::iterator iter;
    cin >> N >> M;
    
    string str;

    for(int i=0; i<N; i++){

        cin >> str;
        
        if(str == "order"){
            int tb, t;
            cin >> tb >> t;
            v.push_back(Node(tb, t));
        }
        else if(str == "sort"){
            sort(v.begin(), v.end(), comp);
        }
        else{
            int d;
            cin >> d;
            for(iter=v.begin(); iter!=v.end(); iter++){
                if(iter->table == d){
                    v.erase(iter);
                    break;
                }
            }
        }
        
        if(v.size() == 0) cout<<"sleep"<<endl;
        else{
            for(iter = v.begin(); iter != v.end(); iter++){
                cout<<iter->table<<" ";
            }
            cout<<endl;
        }
    }

}