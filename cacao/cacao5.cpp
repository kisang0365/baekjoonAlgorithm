#include <string>
#include<map>
#include<cmath>
#include<iostream>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    map<string, int> map1;
    map<string, int> map2;

    //change Algebra
    for(int i=0; i<str1.length(); i++){
        if('A'<=str1[i] && 'Z'>=str1[i]){
            str1[i]+=32;
        }
    }
    for(int i=0; i<str2.length(); i++){
        if('A'<=str2[i] && 'Z'>=str2[i]){
            str2[i]+=32;
        }
    }

    for(int i=0; i<str1.length()-1; i++){
        if('a'<=str1[i] && str1[i] <='z' && 'a'<=str1[i+1] && str1[i+1] <= 'z'){
            string sub = str1.substr(i,2);
            if(map1.find(sub) == map1.end()){
                map1.insert(make_pair(sub, 1));
            }
            else{
                map1[sub]+=1;
            }
        }
    }

    for(int i=0; i<str2.length()-1; i++){
        if('a'<=str2[i] && str2[i] <='z' && 'a'<=str2[i+1] && str2[i+1] <= 'z'){
            string sub = str2.substr(i,2);
            if(map2.find(sub) == map2.end()){
                map2.insert(make_pair(sub, 1));
            }
            else{
                map2[sub]+=1;
            }
        }
    }

    //둘다 공집합 일 경우 
    if(map1.size() == 0 && map2.size() == 0) return 65536;

    map<string, int>::iterator iter;
    //교집합
    double Min = 0;
    //합침합
    double Max = 0;

    for(iter=map1.begin(); iter != map1.end(); iter++){
        if(map2.find(iter->first) == map2.end()){
            Max += iter->second;
        }
        else{
            Min += min(iter->second, map2[iter->first]);
            Max += max(iter->second, map2[iter->first]);
        }
    }
    for(iter=map2.begin(); iter != map2.end(); iter++){
        if(map1.find(iter->first) == map1.end()){
          Max += iter->second; 
        }
    }

    double ans;
    ans = (Min/Max)*65536;
    answer = (int)ans;
    
    return answer;

}

int main(){

    string str1, str2;
    cin >> str1 >> str2;

    cout<<solution(str1, str2)<<endl;
}