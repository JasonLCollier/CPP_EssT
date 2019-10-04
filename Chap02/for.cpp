// for.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
	char strArr[] = "abcdefg";

    // basic for loop
    /*for( int i = 0; strArr[i]; ++i ) {
        printf("i is %c\n", strArr[i]);
    }*/

	for (char *cp = strArr; *cp; cp++) {
		printf("Char is: %c\n", *cp);
	}

    return 0;
}
