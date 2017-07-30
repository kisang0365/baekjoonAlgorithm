/*
 * 2512.cpp
 *
 *  Created on: 2017. 7. 30.
 *      Author: chokisang
 */

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int N;
	cin >> N;
	int arr[10001];
	long long int sum = 0;
	long long int goal;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	cin >> goal;
	sort(arr, arr+N);
	int cnt = N;
	int ans = 0;

	if(sum <= goal) ans = arr[N-1];

	else{
		for(int i=0; i<N; i++){

			if( (arr[i]-ans)*cnt > goal){
				ans += goal/cnt;
				break;
			}
			else{
				int temp = arr[i] - ans;
				ans = arr[i];
				goal -= temp*cnt;
				cnt--;
			}
		cout<<ans<<' '<<goal<<' '<<cnt<<' '<<endl;
		}
	}
	cout<<ans<<endl;
	return 0;
}


