// template-function.cpp by Bill Weinman <http://bw.org/>
// updated 2018-08-18
#include <cstdio>
#include <string>
using namespace std;

template <typename T>
T maxof ( T a, T b ) {
    return ( a > b ? a : b );
}

int main( int argc, char ** argv ) {
    int i = maxof<int>( 7, 9 );
    printf("max is: %d\n", i);
	string s = maxof<string>("seven", "mine");
	printf("max is: %s\n", s.c_str());
    return 0;
}
