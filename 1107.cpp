/*
 * 1107.cpp
 *
 *  Created on: 2017. 5. 21.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>

using namespace std;

int b[10]; //고장

int ans = 1000000;
int s = 0;

int first(int N){
	return abs(N-100);
}

void second(int N, int n, int sum){

	if(n==-1){

		if(abs(N-sum) <= ans){
			ans = abs(N-sum);
			s = sum;
		}
		return;
	}

	for(int i=0; i<10; i++){

		if(b[i] == 0){
			second(N, n-1, sum + i*pow(10,n));
		}

	}

}


int main(){

	int N; //0 <= N <= 500,000
	cin >> N;
	int M; //망가진 갯수
	cin >> M;

	for(int i=0; i<M; i++){
		int num;
		cin >> num;
		b[num] = 1;
	}

	//+-로만 가기
	int d = first(N);

	int temp = N;
	int n = 0;
	while(temp>=10){
		temp/=10;
		n++;
	}

	second(N, n+1, 0);
	second(N,n,0);
	if(n-1 >= 0) second(N,n-1,0);

	if(s == 0) n=1;
	else n=0;

	while(s>0){
		s/=10;
		n++;
	}

	if(d < ans+n) cout<<d<<endl;
	else cout<<ans+n<<endl;
	//맨끝 -> 앞의숫자가 맞는다? 그럼 가장가까운수 안맞는다 ?


	//방법 : 채널 이 후 조절 or 현재상태에서 조절

	return 0;
}
