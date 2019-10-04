// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

/*const*/ int& f(/*const*/ int& i) {
	int temp = i;
	return ++i/*temp*/; //use const to prevent downside of change i outside of function
}

int main()
{
	int i = 5;
	int& ir = i;
	ir = 10;
	int* ip = &i;
	printf("i is equal to %d", i);
	printf(" and ip dereferenced holds %d\n", *ip);
	
	printf("f(i) is %d\n", f(i) = 40);
	printf("After f(i) called, i is equal to %d", i);
	
	cin >> i;
    return 0;
}
