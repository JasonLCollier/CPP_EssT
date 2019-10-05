// recursive-factorial.cpp by Bill Weinman <http://bw.org/>
// updated for C++ EssT 2018-08-09
#include <cstdio>
#include <iostream>
using namespace std;

unsigned long int factorial( unsigned long int n ) {
    if( n < 2 ) return 1;
    return factorial( n - 1 ) * n; //a loop would be more efficient for factorial
}

int main() {
    unsigned long int n = 5;
    printf("Factorial of %ld is %ld\n", n, factorial(n));

	int x;
	cin >> x;

    return 0;
}
