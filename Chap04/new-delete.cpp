// new-delete.cpp by Bill Weinman <http://bw.org/>
//   updated 2018-10-27
#include <cstdio>
#include <new>
#include <iostream>
using namespace std;

int main() {
	constexpr size_t count = 1024;

    printf("allocate space for %lu long int at *ip with new\n", count);
    
    // allocate array
    long int * ip;
    
    try {
        ip = new long int [count]; //variable initialised with "new" must be associated with "delete"
    } catch (std::bad_alloc & ba) {
        fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
        return 1;
    }
    
    // initialize array
    for( long int i = 0; i < count; ++i ) {
        ip[i] = i;
    }
    
    // print array
    for( long int i = 0; i < count; ++i ) {
        printf("%ld ", ip[i]);
    }
    puts("");
    
    // deallocate array
    delete [] ip;
    puts("space at *ip deleted");

	int x;
	cin >> x;
    
    return 0;
}
