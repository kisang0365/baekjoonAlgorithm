/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<climits>

using namespace std;
#define Max 1000000001
int Answer;

int main(int argc, char** argv)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	// freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   Implement your algorithm here.
		   The answer to the case will be stored in variable Answer.
		 */
        int N, K;
        vector<pair<int, long long int> > v;
        scanf("%d", &N);
        //초기자리. 
        v.push_back(make_pair(0, 0));
        
        for(int i=0; i<N; i++){
           int doll;
           scanf("%d", &doll);
           v.push_back(make_pair(doll, Max));
        }
        scanf("%d", &K);
        
        int curIndex = 0;
        bool Ok = true;
        for(int i=1; i<=N; i++){

            if(v[curIndex].first + K < v[i].first){
                curIndex = i-1;
                if(v[i].first - v[curIndex].first > K){
                    Ok = false;
                    break;
                }
            }

             v[i].second = v[curIndex].second+1;
        }

		/////////////////////////////////////////////////////////////////////////////////////////////
		
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
        if(Ok == false) Answer = -1;
        else Answer = v[N].second;

		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}