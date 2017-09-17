#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;


string solution(int n, int t, int m, vector<string> timetable) {
    string answer = "";

    vector<pair<int, int> > v;

    for(int i=0; i<timetable.size(); i++){
        string times = timetable[i];
        int h = (times[0]-'0')*10+(times[1]-'0');
        int m = (times[3]-'0')*10+(times[4]-'0');
        if( h < 18 ) v.push_back(make_pair(h, m));
        else if( h == 18 && m == 0) v.push_back(make_pair(h, m));
    }

    int index = 0;
    int MaxIndex = n*m-1;

    //대기열에 없는 경우 가장 늦은 버스 타기. 
    if(v.size() == 0){
        int busH = 9 + ((n-1)*t)/60;
        int busM = 0 + ((n-1)*t)%60;

        if(busH < 10) answer+='0';
            answer = answer + to_string(busH) + ':';
        if(busM < 10) answer += '0';
            answer += to_string(busM);
                
        return answer;
    }

    //대기열이 있으면.
    sort(v.begin(), v.end());
    
    bool lastNotFull = false;

    for(int i=0; i<n; i++){
        
        int nowT = i*t;
        int busH = 9 + (nowT)/60;
        int busM = 0 + (nowT)%60;

        int cnt = 1;

        while(cnt <= m){   

            //다 태우고도 남으면 마지막에 와서 탐.
            if(v.size() == index){
                int busH = 9 + ((n-1)*t)/60;
                int busM = 0 + ((n-1)*t)%60;
        
                if(busH < 10) answer+='0';
                    answer = answer + to_string(busH) + ':';
                if(busM < 10) answer += '0';
                    answer += to_string(busM);
                        
                return answer;
            }

            if(v[index].first < busH){
                index++;
                cnt++;
            }
            else if(v[index].first == busH && v[index].second <= busM){
                index++;
                cnt++;
            }
            else{
                if(i==n-1) lastNotFull = true;
                break;
            }
        }
    }
    //전 인원.
    index--;
    int lastH;
    int lastM;
    if(lastNotFull == false){
        lastH = v[index].first;
        lastM = v[index].second-1;
        if(lastM == -1){
            lastM = 59;
            lastH -= 1;
        }
    }
    else{
        lastH = 9 + ((n-1)*t)/60;
        lastM = 0 + ((n-1)*t)%60;
    }

    if(lastH < 10) answer+='0';
    answer = answer + to_string(lastH) + ':';
    if(lastM < 10) answer += '0';
    answer += to_string(lastM);

    return answer;
}

int main(){

    vector<string> a;
    a.push_back("09:00");
    a.push_back("10:00");
    a.push_back("18:00");
    a.push_back("18:00");
    a.push_back("18:00");
    
    cout<<solution(1,1,2,a)<<endl;


    return 0;
}