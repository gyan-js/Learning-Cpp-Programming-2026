#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";

    string::iterator it;

    for (it = str.begin(); it != str.end(); ++it) {
        cout << *it = *it - 32 << endl;
    }

    cout<<"String in reverse order: ";
    for (it = str.rbegin(); it != str.rend(); ++it) {
        cout << *it;
    }
    cout << endl;
}

