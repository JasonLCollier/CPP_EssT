// struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main() {
    Employee joe = { 42, "Joe", "Boss" };
	Employee* e = &joe;
    
    /*printf("%s is the %s and has id %d\n",
           joe.name, joe.role, joe.id);*/

	printf("%s is the %s and has id %d\n",
		e->name, e->role, e->id);

	int x;
	cin >> x;
    
    return 0;
}
