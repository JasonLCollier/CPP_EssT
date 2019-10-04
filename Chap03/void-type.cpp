// void-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

void func ( void ) { //void in argument list simply for compatability with C
    puts("this is void func ( void )");
}

int main() {
    puts("calling func()");
    func();

	int x;
	cin >> x;

    return 0;
}

