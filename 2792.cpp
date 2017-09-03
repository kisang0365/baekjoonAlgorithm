#include<iostream>

using namespace std;

int color[300001] = {0, };
int N, M;

int binary_search(int left,int right){

    while(left < right){
        int mid = (left + right)/2;
        int sum = 0;
        for(int i=0; i<M; i++){
            sum += color[i]/mid;
            if(color[i]%mid != 0) sum+=1;
        }


        if(sum > N){
            left = mid+1;
        }
        else{
            right = mid;
        }
    }

    return left;
}
// 1 2 3 4


int main(){

    cin >> N >> M;

    int Max = 0;
    for(int i=0; i<M; i++){
        cin >> color[i];
        if(color[i] > Max) Max = color[i];
    }

    cout<<binary_search(1, Max)<<endl;

    return 0;
}