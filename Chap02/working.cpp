// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
	/******************Pointers & References******************/
	//const int i = 7; //read only
	int x = 7; // variable x has value of 7
	int* ip = &x; // ip holds address of x
	int &y = x; // address of y holds contents of x (always)

	//x = 3;
	y = 5;

	int z = 10;
	ip = &z;

	printf("The value of *ip is %d\n", *ip);
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
	printf("The value of z is %d\n", z);

	/******************Primitive Array******************/
	//int arr[5] = {1 , 2, 3, 4, 5}
	int arr[5];
	/*
	//arr[0] = 1;
	//arr[1] = 2;
	//arr[2] = 3;
	//arr[3] = 4;
	//arr[4] = 5;
	*/
	int* iPoint = arr; //initialise pointer to be equal to address of array
	*iPoint = 1;

	++iPoint;
	*iPoint = 2;
	*(++iPoint) = 3;
	*(++iPoint) = 4;
	*(++iPoint) = 5;

	printf("The value of arr[0] is %d\n", arr[0]);
	printf("The value of arr[1] is %d\n", arr[1]);
	printf("The value of arr[2] is %d\n", arr[2]);
	printf("The value of arr[3] is %d\n", arr[3]);
	printf("The value of arr[4] is %d\n", arr[4]);

	/******************Primitive String******************/
	char str[] = "String";
	//char str[] = { 'S', 't', 'r', 'i', 'n', 'g', 0 }; //terminated with zero
	printf("String is: %s\n", str);

	/*for (int i = 0; str[i] != 0; i++) {
		printf("Char is: %c\n", str[i]);
	}*/

	/*for (char *cp = str; *cp; cp++) {
		printf("Char is: %c\n", *cp);
	}*/

	//Range based for loop
	for (char c : str) {
		if (c == 0)
			break;
		printf("Char is: %c\n", c);
	}

	/******************Conditionals******************/
	int m = 40;
	int n = 5;

	/*if (m > n) {
		puts("Condition is true");
	}
	else if (m > 12) {
		puts("else if is true");
	}
	else {
		puts("condition is false");
	}*/

	printf("Value of conditional is %d\n", m > n);
	printf("The greater value is %d\n", m > n ? m : n);// return m if first statement is true and n if false
	
    return 0;
}
