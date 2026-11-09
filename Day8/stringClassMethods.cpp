
#include <iostream>
#include <string>
using namespace std;

void basicStringMethods() {
    string s = "Hello";

    cout << "1. length(): " << s.length() << endl;
    cout << "2. size(): " << s.size() << endl;
    cout << "3. capacity(): " << s.capacity() << endl;

    s.resize(10);
    cout << "4. resize(10): " << s << endl;

    cout << "5. max_size(): " << s.max_size() << endl;

    s.clear();
    cout << "6. clear(): " << s << endl;

    cout << "7. empty(): " << (s.empty() ? "Yes" : "No") << endl;
}




int main()


    return 0;
}
