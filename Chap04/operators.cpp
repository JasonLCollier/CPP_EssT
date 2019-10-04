// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	/*Operators*/
	int x = 10; //assignment operator
	x = 10 + 5; //arithmetic operator
	int y = -x; //unary operator;
	int z = x % 4; //modular - returns remainder after division
    printf("x = %d\ty = %d\tz = %d\n", x, y, z);

	/*Compound Assignment Operators*/
	x += z; //compound assignemnt operator (x = x + y) - more efficient
	printf("x +=  z: x = %d\n", x);

	/*Increment and Decrement Operators*/
	int i = 0;
	printf("i = %d\n", ++i); //Prefix - inrement then evaluate
	printf("i = %d\n", ++i);
	printf("i = %d\n", ++i);

	int j = 0;
	printf("j = %d\n", j++); //Postfic - evaluate then incremement
	printf("j = %d\n", j++);
	printf("j = %d\n", j++);

	/*Relational (Comparitive) Operators*/
	if (x > y)// >= < <= ==
		puts("x > y: true");
	else
		puts("x > y: true");

	/*Logical Operators*/
	bool a = true;
	bool b = false;

	if (!(a && b)) //||
		puts("!(a && b): true");
	else
		puts("!(a && b): false");

	/*Ternary Conditional Operators*/
	const char* s = x > y ? "yes" : "no";
	printf("x > y ? %s", s);

	cin >> x;

    return 0;
}
