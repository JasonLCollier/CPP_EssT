// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
#include "func.h"
using namespace std;

int main()
{
    puts("this is main()");

	int x = 40;
	printf("x before function = %d\n", x);
    func(x); 
	printf("x after function = %d\n", x);

	cin >> x;

    return 0;
}

void func(/*const*/int &i) //function using a reference (use const to prevent unwanted changes in function)
{
	printf("this is func(%d)\n", i);
	i = 80;
}

