/*
 * equal.cpp
 *
 *  Created on: 2017. 6. 14.
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
    int T;
    cin >> T;

    while(T--){
    	int C[10001];
    	int N; //collegue number
    	int sum = 12345678;

    	cin >> N;
    	C[0] = 0;
    	for(int i=1; i<=N; i++){
    		cin >> C[i];
    	}

    	sort(C, C+N+1);

    	for(int base=0; base<3; base++){
    		int now_sum = 0;
    		for(int j=1; j<=N; j++){
    			int p = C[j]-C[1] + base;
    			now_sum += (int)p/5 + p%5/2 + p%5%2/1;
    		}
    		sum = min(sum, now_sum);
    	}

    	cout<<sum<<endl;
    }

	return 0;
}



