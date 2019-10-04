// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
	int x = 5;
	long long int y;
	y = x; //automatic cast (x = y will not work though because y size > x size)
	x = (int)y; //cast operator

	printf("x = %d/n", x);
	printf("y = %lld/n", x);

    return 0;
}
