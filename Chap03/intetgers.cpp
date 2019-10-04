// integers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main()
{
    printf("sizeof char is %ld bits\n", sizeof(char) * byte);
    printf("sizeof short int is %ld bits\n", sizeof(short int) * byte);
    printf("sizeof int is %ld bits\n", sizeof(int) * byte);
    printf("sizeof long int is %ld bits\n", sizeof(long int) * byte);
    printf("sizeof long long int is %ld bits\n", sizeof(long long int) * byte);

	//int x = 147;
	//long int x = 147L;
	//long long int x = 147LL;
	unsigned int x = 147U;
	//int x = 0223;
	//int x = 0x0093;
	//int x = 0b010010011;
	cout << "x is " << x << endl;

	cin >> x; // Console.ReadLine() equivalent

    return 0;
}
