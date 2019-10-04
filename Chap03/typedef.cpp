// typedef.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

typedef unsigned char points_t;
typedef unsigned char rank_t;

struct score {
    points_t p;
    rank_t r;
};

int main()
{
    struct score s = { 5, 1 };
    printf("score s had %d points and a rank of %d\n", s.p, s.r);
    
	int x;
	cin >> x;

    return 0;
}
