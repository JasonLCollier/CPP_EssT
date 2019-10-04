// qualifiers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    /*static*/ int x = 7; //when static, lifetime of variable is lifetime of entire program
    return ++x;
}

int main() {
    /*const*/int i = 42;

	i = func();
    printf("The integer is %d\n", i);

	i = func();
	printf("The integer is %d\n", i);

	i = func();
	printf("The integer is %d\n", i);

	S a;
	printf("a.static_value() is %d\n", a.static_value());
	S b;
	printf("b.static_value() is %d\n", b.static_value());
	S c;
	printf("c.static_value() is %d\n", c.static_value());

	cin >> i;

    return 0;
}
