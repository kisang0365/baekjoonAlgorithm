#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct _MEDAL{
    int num;
    int Gold;
    int Silver;
    int Dong;

    _MEDAL(int num, int a, int b, int c){
        this->num = num;
        this->Gold = a;
        this->Silver = b;
        this->Dong = c;
    }
}MEDAL;

bool compare(MEDAL a, MEDAL b){
    if(a.Gold > b.Gold) return true;
    else if(a.Gold == b.Gold){
        if(a.Silver > b.Silver) return true;
        else if(a.Silver == b.Silver){
            if(a.Dong > b.Dong) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}


int main(){
    int N, K;
    vector<MEDAL> v;
    cin >> N >> K;

    for(int i=0; i<N; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        v.push_back(MEDAL(a,b,c,d));
    }

    sort(v.begin(), v.end(), compare);
    
    int cnt = 1;
    
    for(int i=0; i<N; i++){

        if(v[i].num == K){
            cout<<cnt<<endl;
            break;
        }

        if(v[i].Gold == v[i+1].Gold && v[i].Silver == v[i+1].Silver && v[i].Dong == v[i+1].Dong){
            cnt = cnt;
        }
        else{
            cnt = i+2;
        }
    }


    return 0;
}