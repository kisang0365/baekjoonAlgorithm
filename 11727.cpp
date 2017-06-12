
#include<iostream>

using namespace std;

int main(){

   int n;
   cin >> n;
   int arr[1001];

   arr[0] = 0;
   arr[1] = 1;
   arr[2] = 3;

   for(int i=3; i<=n; i++){
	   arr[i] =  ( arr[i-1] + (arr[i-2]*2) ) %10007;
   }

   cout<<arr[n]<<endl;

   //2*n 직사각형을 2*1 혹은 2*2로 채우는 방법의 수.




	return 0;
}
