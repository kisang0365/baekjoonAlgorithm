#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

struct Point{
    int x;
    int y;
};

bool comp(Point a, Point b){
    if(a.y == b.y) return a.x < b.x;
    else
        return a.y > b.y;
}

bool check(Point point[4]){
       
    int nx = abs(point[0].x - point[1].x);
    int ny = abs(point[0].y - point[1].y);
    long long int c1 = nx*nx + ny*ny;
    
    nx = abs(point[0].x - point[2].x);
    ny = abs(point[0].y - point[2].y);
    long long int c2 = nx*nx + ny*ny;

    nx = abs(point[3].x - point[1].x);
    ny = abs(point[3].y - point[1].y);
    long long int c3 = nx*nx + ny*ny;

    nx = abs(point[3].x - point[2].x);

    ny = abs(point[3].y - point[2].y);
    long long int c4 = nx*nx + ny*ny;
    
    return c1 == c2 && c2 == c3 && c3 == c4 && c4 == c1;
}
int main(){

    int T;
    cin >> T;

    while(T--){
        
        Point point[4];

        for(int i=0; i<4; i++){
            cin >> point[i].x >> point[i].y;
        }
        sort(point, point+4, comp);

        if(check(point) == true) cout<<"1"<<endl;
        else cout<<"0"<<endl;

    }


    return 0;
}