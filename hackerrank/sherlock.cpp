/*
 * sherlock.cpp
 *
 *  Created on: 2017. 6. 26.
 *      Author: chokisang
 */

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
		int T, N;
		cin >> T;
		while(T--){
			cin >> N;
			int B[100001];
			for(int i=0; i<N; i++){
				cin >> B[i];
			}
			int H = 0;
			int L = 0;

			for(int i=1; i<N; i++){

				int Lvalue = max(L, H+abs(B[i-1]-1));
				int Hvalue = max(H+abs(B[i]-B[i-1]), L+abs(1 - B[i]));
				//cout<<Lvalue<<' '<< Hvalue<<endl;
				L = Lvalue;
				H = Hvalue;

			}

			cout<<max(H, L)<<endl;

		}
	return 0;
}



