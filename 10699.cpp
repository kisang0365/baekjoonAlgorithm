/*
 * 10699.cpp
 *
 *  Created on: 2017. 7. 1.
 *      Author: chokisang
 */


#include <iostream>
#include <ctime>

using namespace std;

char* timeToString(struct tm *t) {
    static char s[20];
    sprintf(s, "%04d-%02d-%02d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
    return s;
}


int main(void) {

	struct tm *t;
    time_t timer;
    timer = time(NULL);
    t = localtime(&timer);

    cout<<timeToString(t)<<endl;
    return 0;
}
