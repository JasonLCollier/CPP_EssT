// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

void func()
{
	static int i = 5; //static variable not stored on stack, but rather permanent storage (default is auto)
	printf("i = %d\n", ++i);
}

int main()
{
    func();
	func();
	func();

	int x;
	cin >> x;

    return 0;
}

