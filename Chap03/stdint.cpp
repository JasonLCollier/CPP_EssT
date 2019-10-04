// stdint.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <cstdint>
#include <iostream>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main()
{
    printf("sizeof uint8_t is %ld bits\n", sizeof(uint8_t) * byte); //use u for unsigned
    printf("sizeof int16_t is %ld bits\n", sizeof(int16_t) * byte);
    printf("sizeof int32_t is %ld bits\n", sizeof(int32_t) * byte);
    printf("sizeof int64_t is %ld bits\n", sizeof(int64_t) * byte);

	int x;
	cin >> x;

    return 0;
}
