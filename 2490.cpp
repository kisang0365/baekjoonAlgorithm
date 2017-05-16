
#include<iostream>

using namespace std;

int main(){

	int T = 3;
	while(T--){
		int a, b, c, d;

		cin >> a >> b >> c >> d;

		int sum = a+b+c+d;
		if(sum == 4) cout<<"E"<<endl;
		else if(sum == 3) cout<<"A"<<endl;
		else if(sum == 2) cout<<"B"<<endl;
		else if(sum == 1) cout<<"C"<<endl;
		else cout<<"D"<<endl;
	}
	return 0;
}
