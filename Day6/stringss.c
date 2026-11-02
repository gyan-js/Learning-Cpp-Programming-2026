#include <iostream>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    std::string result = str1 + " " + str2;
    std::cout << result << std::endl;


    char str3[100] = "";
    std::cin.getline(str3, 100);
    std::cout << str3 << std::endl;


    return 0;
}