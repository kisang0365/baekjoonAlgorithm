#include<iostream>
#include<cmath>
using namespace std;

int N;
int ans = 0;

void check(int len, int value){
	
	if(len == N){
		if(value %3 == 0)
			ans++;
		return;
	}

	for(int i=0; i<3; i++){
		
		if(i == 0 && len+1 == N) continue;

		check(len+1, value+i*pow(10,len));
	}
	
}


int main(){

	cin >> N;

	check(0,0);

	cout<<ans<<endl;

	return 0;
}