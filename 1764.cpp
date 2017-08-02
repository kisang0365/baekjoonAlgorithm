#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int N, M;
    map<string, int> m;
    vector<string> v;
    map<string, int>::iterator iter;
    string str;
    
    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> str;
        m.insert(make_pair(str, 0));
    }

    for(int i=0; i<M; i++){
        cin >> str;
        iter = m.find(str);
        if(iter != m.end()){
            v.push_back(iter->first);
         }
    }
    cout<<v.size()<<endl;
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    return 0;
}