/*
 * 1024.cpp
 *
 *  Created on: 2017. 5. 17.
 *      Author: chokisang
 */


#include<iostream>

using namespace std;

int main(){

	//N < 1000000000
	// 2<= L <= 100
	//L 적어도 길이, N
	int N, L;
	cin >> N >> L;

	bool find = false;

	for(int i= L; i<=100; i++){
		int divide = N/i;
		int mod = N%i;

		if(i%2 == 1){
			if(mod == 0){
				if(divide-i/2>=0){
					for(int a=divide-i/2; a<=divide+i/2; a++)
						cout<<a<<' ';
					find = true;
				}
			}
		}
		// 3 4 5 6  2   21 /6 = 3 나머지 3   1 2 3 4 5 6
		else{
			if(i/2 == mod && divide - mod >= -1 ){
				for(int a = divide - i/2 +1; a<=divide+i/2; a++)
						cout<<a<<' ';
					find = true;

			}
		}

		if(find == true || i > N)
			break;
	}
	if(find == false) cout<<"-1";
	cout<<endl;

	return 0;
}


