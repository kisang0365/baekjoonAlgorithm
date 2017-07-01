/*
 * 11021.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */

#include<cstdio>

int main(){

	int T, n1, n2;
	int i;

	scanf("%d", &T);
	for(i=1; i<=T; i++){
		scanf("%d %d", &n1, &n2);
		printf("Case #%d: %d\n",i, n1+n2);
	}


	return 0;
}

