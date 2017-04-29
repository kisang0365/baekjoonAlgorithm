/*
 * 11401.cpp
 *
 *  Created on: 2017. 4. 27.
 *      Author: chokisang
 */

#include<iostream>
#include<cmath>
using namespace std;
/*
 참
https://www.acmicpc.net/blog/view/29
*/
long long mul(long long x, long long y, long long p) {
    long long ans = 1;
    while (y > 0) {
        if (y%2 != 0) {
            ans *= x;
            ans %= p;
        }
        x *= x;
        x %= p;
        y/=2;
    }
    return ans;
}
int main(){

	long long N, K, P;
	cin >> N >> K;
	P = 1000000007;

	long long ans = 1;
	long long A = 1;
	long long B = 1;
	long long C = 1;

	for(long long i=1; i<=N; i++){
		A *= i;
		A %= P;
	}
	for(long long i=1; i<=K; i++){
		B *= i;
		B %= P;
	}
	for(long long i=1; i<=N-K; i++){
		B *= i;
		B %= P;
	}
	C = mul(B,P-2, P);

	C %= P;
	ans = A * C;
	ans %= P;

	cout<<ans<<endl;

	return 0;
}


