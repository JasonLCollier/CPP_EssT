// nullptr.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

#ifndef NULL
#define NULL (0LL) /* common C++ definition */
#endif

void f( int i ) {
    printf("the int is %d\n", i);
}

void f( const char * s ) {
    printf("the pointer is %p\n", s);
}

int main() {
    f(NULL);
	f(nullptr);
	f(3);
	f("String");

	int x;
	cin >> x;

    return 0;
}
