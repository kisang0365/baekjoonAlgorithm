/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define PI 3.141592

int Answer;
int B,T1,T2,D1,D2;
int N;

const int score[20] = {
		11,8,16,7,19,3,17,2,15,10,6,13,4,18,1,20,5,12,9,14
};

int make(int x, int y, int value){

	double h = sqrt(x*x + y*y);

	if(h <= B)
		return 50;
	else if(h>=T1 && h <= T2)
		return 3*value;
	else if(h>=D1 && h<=D2)
		return 2*value;
	else if(h <= D2)
		return value;
	else return 0;
}


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
		/////////////////////////////////////////////////////////////////////////////////////////////


		scanf("%d %d %d %d %d", &B, &T1, &T2, &D1, &D2);
		scanf("%d", &N);

		int x,y;
		Answer = 0;
		for(int i=0; i<N; i++){
			scanf("%d %d", &x, &y);

			float degree = atan2(y,x)*180/PI;
			degree += 180;
			int value;
			if(degree <=9 || degree >= 360-9)
				value = score[0];
			else{
				int idx = (degree-9)/18+1;

				value = score[idx];
			}
			Answer += make(x,y,value);

		}
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
