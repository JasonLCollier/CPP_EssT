// exception.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <iostream>
#include <exception>
using namespace std;

class E : public exception {
    const char * msg;
    E();
public:
    E(const char * s) throw() : msg(s) {}
    const char * what() const throw() { return msg; }
};

const E e_bad("Bad error!");
const E e_worse("Worse error!");
const E e_worst("Worst error!");

void broken() {
    cout << "this is a broken function" << endl;
    //throw exception();
	//throw E("Ouch, error!");
	throw e_worst;
}

int main() {
    cout << "let's have an emergency!" << endl;
	try {
		broken();
	} catch (/*exception*/ E & e) {
		cout << e.what() << endl;
	}
    return 0;
}
