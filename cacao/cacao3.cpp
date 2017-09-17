#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    
    int answer = 0;
    
    map<string, int> m;
    map<string, int>::iterator iter;

    for(int i=0; i<cities.size(); i++){
        
        string city = cities[i];
        
        for(int j=0; j<city.length(); j++){
            if('A'<=city[j] && city[j] <= 'Z')
                city[j] +=32;
        }
        
        if(m.find(city) == m.end()){

            if(cacheSize > 0){

                if(m.size() == cacheSize){
                    string change;
                    int Max = 1<<22;
                    for(iter=m.begin(); iter != m.end(); iter++){
                        if(iter->second < Max){
                            Max = iter->second;
                            change = iter->first;
                        }
                    }
                    m.erase(change);
                    m.insert(make_pair(city, i));
                }
                else{
                    m.insert(make_pair(city, i));
                }
            }
            
            answer+=5;
        }
        else{
            answer += 1;
            m[city] = i;
        }

    }
    return answer;
}
