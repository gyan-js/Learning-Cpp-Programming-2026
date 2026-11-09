
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

void appendStringMethods() {
    string s1 = "Good";
    string s2 = "Morning";

    s1.append(" Bye");
    cout << "1. append(): " << s1 << endl;

    s1.insert(3, "kk");
    cout << "2. insert(): " << s1 << endl;

    s1.replace(3, 5, "aa");
    cout << "3. replace(): " << s1 << endl;

    s1.erase(3, 2);
    cout << "4. erase(): " << s1 << endl;

    s1.push_back('z');
    cout << "5. push_back(): " << s1 << endl;

    s1.pop_back();
    cout << "6. pop_back(): " << s1 << endl;

    s1.swap(s2);
    cout << "7. swap(): " << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
}



int main()


    return 0;
}
