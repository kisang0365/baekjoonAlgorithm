#include<iostream>
#include<vector>

using namespace std;

int Sdoku[10][10] = {0, };
int rowCheck[10][10] = {0, };
int colCheck[10][10] = {0, };
int boxCheck[10][10] = {0, };

#define makebox(x,y) ((x-1)/3)*3+(y-1)/3

vector<pair<int, int> > v;
bool flag = false;

void print(){
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            cout<<Sdoku[i][j]<<' ';
        }
        cout<<endl;
    }
}

void tracking(){

    if(flag == true) return;

    int x = -1,y = -1;

    for(int i=0; i<v.size(); i++){
        if(Sdoku[v[i].first][v[i].second] == 0)
        {
            x = v[i].first; y = v[i].second;
            break;
        }
    }
    if(x == -1 && y == -1){
        print();
        flag = true;
        return;
    }

     for(int i=1; i<=9; i++){

            if(rowCheck[x][i] == 0 && colCheck[y][i] == 0 && boxCheck[makebox(x,y)][i] == 0){
                Sdoku[x][y] = i;
                rowCheck[x][i] = 1;
                colCheck[y][i] = 1;
                boxCheck[makebox(x,y)][i] = 1;

                tracking();

                Sdoku[x][y] = 0;
                rowCheck[x][i] = 0;
                colCheck[y][i] = 0;
                boxCheck[makebox(x,y)][i] = 0;
        }   
    }
}




int main(){

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            cin >> Sdoku[i][j];
            if(Sdoku[i][j] == 0){
                v.push_back(make_pair(i,j));
            }
            else{
                rowCheck[i][Sdoku[i][j]] = 1;
                colCheck[j][Sdoku[i][j]] = 1;
                boxCheck[makebox(i,j)][Sdoku[i][j]] = 1;
            }
        }
    }

    tracking();

    return 0;
}