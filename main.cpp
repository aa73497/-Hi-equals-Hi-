#include <iostream>
#include "src/hello.hpp"
using namespace std;

int main() {

 string a = "String one";

string b = "string two";

 cout << "The comparison of " + a +" and " + b + " returns "; strcmp_case_insensitive(a,b); cout << "." << endl;

    cout << "The comparison of " + a +" and " + a + " returns "; strcmp_case_insensitive(a,a); cout << "." << endl;

    cout << "The comparison of " + b +" and " + a + " returns "; strcmp_case_insensitive(b,a); cout << "." << endl;
    return 0;
}
