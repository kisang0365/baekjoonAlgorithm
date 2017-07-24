#include<iostream>

using namespace std;

int main(){

	int pay;
	cin >> pay;

	const int Money[6] = {500, 100, 50, 10, 5, 1};

	pay = 1000 - pay;

	int cnt = 0;
	int i = 0;

	while(pay > 0){

		if(i>6) break;
		cnt += pay/Money[i];

		pay = pay%Money[i];

		i++;
	}
	cout<<cnt<<endl;
	return 0;
}
