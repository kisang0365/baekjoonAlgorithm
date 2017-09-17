#include <string>
#include <vector>
#include<iostream>

using namespace std;
int solution(int m, int n, vector<string> board) {
    
    int answer = 0;
    
    char tempBoard[31][31];
    bool go = true;

    do{
        //현재 상태 배열.  
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                tempBoard[i][j] = board[i][j];
            }
        }

        //2*2찾기. 
        for(int i=0; i<m-1; i++){
            for(int j=0; j<n-1; j++){
                char caric = board[i][j];
                if(caric == '!') continue;

                if(caric == board[i+1][j] && caric == board[i][j+1] && caric == board[i+1][j+1]){
                    tempBoard[i][j] = '@';
                    tempBoard[i][j+1] = '@';
                    tempBoard[i+1][j] = '@';
                    tempBoard[i+1][j+1] = '@';
                }
            }
        }

        //변화확인변수
        int nowCnt = 0;

        //적용
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(tempBoard[i][j] == '@'){
                    nowCnt++;
                    board[i][j] = '!';
                } 
                else{
                    board[i][j] = tempBoard[i][j];
                }
            }
        }

        //균형 맞추기.B가 현재 빈 곳. 
        for(int i=m-1; i>=0; i--){
            for(int j=0; j<n; j++){

                if(board[i][j] == '!'){
                  int temp = i-1;
                  
                  while(temp>=0){
                    
                    if(board[temp][j] != '!'){
                        char c = board[i][j];
                        board[i][j] = board[temp][j];
                        board[temp][j] = c;
                        temp = -1;
                    }
                    else{
                        temp--;
                    }
                  }
                }
            }
        }

        if(nowCnt == 0) go = false;
        else{
            answer += nowCnt;
        }

    }while(go == true);

    return answer;
}

int main(){
    int m,n;
    vector<string> v;
    cin >> m >> n;
    for(int i=0; i<m; i++){
        string str;
        cin >> str;
        v.push_back(str);
    }
    cout<<solution(m, n, v)<<endl;
}