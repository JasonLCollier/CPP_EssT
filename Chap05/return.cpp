// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

const string & func() //Return a reference if returning a large object (don't want it stored on stack)
{
    const static string s = "this is func() returning reference string";
	return s;
}

int main()
{
    const string s = func();
	printf(s.c_str());

	int x;
	cin >> x;

    return 0;
}

