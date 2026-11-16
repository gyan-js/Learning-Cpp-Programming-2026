#include <iostream>
#include <string>

int main() {
    int count = 0;
    std::string str = "Swastika!";
    std::string::iterator it;
    for (it = str.begin(); it != str.end(); ++it) {
        count++;
    }

    std::cout << "Length of the string is: " << count << std::endl;
}