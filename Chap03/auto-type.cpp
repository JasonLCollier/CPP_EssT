// auto-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
#include <typeinfo>
#include <iostream>
using namespace std;

string func() {
    return string("this is a string");
}

int main() {
    auto x = func();
    printf("x is %s\n", x.c_str());
    if(typeid(x) == typeid(string)) puts("x is string");

	cin >> x;

    return 0;
}