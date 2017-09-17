#include <string>
#include <iostream>
#include<cmath>
using namespace std;

int solution(string dartResult) {
    
    int answer = 0;
    const int chance = 3;
    int point[3] = {0, };
    int index = 0;

    for(int i=0; i<chance; i++){
        point[i] = dartResult[index]-'0';
        index++;
        if(dartResult[index] =='0'){
            point[i]*=10;
            index++;
        }
        
        if( dartResult[index] == 'S'){
            point[i] = pow(point[i], 1);
        }
        else if(dartResult[index] == 'D'){
            point[i] = pow(point[i], 2);
        }
        else{
            point[i] = pow(point[i], 3);
        }

        index++;

        if(index < dartResult.length()){
            
            if(dartResult[index] == '*'){
                if(i == 0) point[i] *= 2;
                else{
                    point[i] *= 2;
                    point[i-1] *= 2;
                }
                index++;
            }
            else if(dartResult[index] == '#'){
                point[i] = point[i]*-1;
                index++;
            }
        }
    }
    answer = point[0] + point[1] + point[2];
    
    return answer;
}

int main(){

    string str;
    cin >> str;

    cout<<solution(str)<<endl;

}