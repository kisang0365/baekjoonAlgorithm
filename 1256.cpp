/*
 * 1256.cpp
 *
 *  Created on: 2017. 7. 28.
 *      Author: chokisang
 */

/*
 *
 * http://am003507.tistory.com/188 참고...
 *
 */
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int Dp[201][101];
int N, M, K;
long cnt[201][101] = {0, };
bool visit[201][101] = {false, };
char result[201];
int num = 0;

long binary(int nm, int m){

	if(nm < m ) return 0;
	if( nm == m || m == 0) return 1;

	if(visit[nm][m]) return cnt[nm][m];

	visit[nm][m] = true;
	cnt[nm][m] += binary(nm-1, m);
	cnt[nm][m] += binary(nm-1, m-1);

	return min(cnt[nm][m], (long)1000000001);
}

 void find(int nm, int m, long k){

	 if(nm == 0) return;
	 if(m == 0){
		 for(int i=0; i<nm; i++)
			 result[num + i] = 'a';
		 return;
	 }
	  long pivot = binary(nm-1, m);

	  if(pivot < k){
		  result[num++] = 'z';
		  find(nm-1, m-1, k-pivot);
	  }else{
		  result[num++] = 'a';
		  find(nm-1, m, k);
	  }

  }

int main(){

	cin >> N >> M >> K;

	long num = binary(N+M, M);
	if(num >= K){
		fill(result, result+201, 'a');
		find(N+M, M, (long)K);
		for(int i=0; i<N+M; i++) cout<<result[i];
	}
	else{
		cout<<"-1"<<endl;
	}

	return 0;

}
