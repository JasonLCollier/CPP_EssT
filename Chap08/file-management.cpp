// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
	static const char* fn1 = "file1";
	/*FILE* fh = fopen(fn1, "w");
	fclose(fh);*/
	static const char* fn2 = "file2";
	//rename(fn1, fn2);
	remove(fn2);

    puts("Done!");
    return 0;
}
