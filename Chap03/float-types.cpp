// float-types.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main() {
    float f;
    double df;
    long double ldf;
    
    printf("size of float f is %ld bits\n", sizeof(f) * byte);
    printf("size of double float df is %ld bits\n", sizeof(df) * byte);
    printf("size of long double float ldf is %ld bits\n", sizeof(ldf) * byte);

	//f = 500.0;
	df = 5e20;
	printf("Value of df is %lf\n", df); //Take note of precision of floating point numbers, especially when testing equality (==)

	cin >> f;
    
    return 0;
}
