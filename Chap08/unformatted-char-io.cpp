// working.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

int main()
{
	const int bufsize = 256;
	static char buf[bufsize];
	fputs("Prompt: ", stdout);
	fflush(stdout);
	fgets(buf, bufsize, stdin);
	fputs(buf, stdout);
    return 0;
}
