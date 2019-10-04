// pointer-incr.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

void printp(int *p) {
    printf("pointer is %p, value is %d\n", p, *p);
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *p = arr; //points to first memory address of array
    printp(p++);
    printp(p++);
    printp(p++);

	int x;
	cin >> x;

    return 0;
}
