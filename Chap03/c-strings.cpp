// c-strings.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    //char cstring[] = "String"; //c-string consisting of array of characters including a null byte at end of array
	const char * cstring = "String" " foo"; //pointer is not constant and can still change
	printf("The string is: %s\n", cstring);
    
    for( unsigned int i = 0; cstring[i]; i++) {
        printf("%02d: %c\n", i, cstring[i]);
    }

	int x;
	cin >> x;

    return 0;
}
