#include <iostream>
#include <string>


int main () {
    string str ;

    getline(cin, str); // Read a line of input into the string

    std::cout << "You entered: " << str << std::endl; // Output the string
}