#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(pair<char, int> a, pair<char, int> b){
    return a.second > b.second;
}

int main(){

    int N;
    string str[11];
    map<char, int> m;
    map<char, int>::iterator iter;
    vector<pair<char, int> > v;

    cin >> N;
    //string을 받아오고..
    for(int i=0; i<N; i++){
        cin >> str[i];
    }

    //각 자리들 숫자들의 가치를 구하자. 
    for(int i=0; i<N; i++){
        int cnt = 1;

        for(int j=str[i].length()-1; j>=0; j--){
            if(m.find(str[i][j]) == m.end()){
                m.insert(make_pair(str[i][j],cnt));
            }
            else{
                m[str[i][j]] += cnt;
            }
            cnt = cnt*10;
        }
    }

    for(iter = m.begin(); iter != m.end(); iter++){
        v.push_back(make_pair(iter->first, iter->second));
    }

    //가치기준으로 정렬. 
    sort(v.begin(), v.end(), comp);
    
    int value = 9;
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum += value * v[i].second;
        value--;
    }
    cout<<sum<<endl;
    return 0;
}
