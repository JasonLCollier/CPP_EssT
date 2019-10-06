// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct S { //effectively a class with public members
	int a, b, c;
};

int main()
{
	S s = { 1, 2, 3 };
	printf("a = %d, b = %d, c = %d", s.a, s.b, s.c);
    return 0;
}
