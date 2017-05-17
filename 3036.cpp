#include<iostream>

using namespace std;

int gcd(int u, int v){
	if(v == 0 ) return u;

	return gcd(v,u%v);

}



int main(){

	int N;
	int R[101];

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> R[i];
		if(i>0){
			int G = 0;
			if(R[0] > R[i]) G = gcd(R[0], R[i]);
			else G = gcd(R[i], R[0]);

			cout<<R[0]/G<<'/'<<R[i]/G<<endl;
		}
	}

	return 0;
}
