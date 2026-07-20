#include <iostream>

int main() {
    int a = 11, b =12;
    int x = a&b;
    int y = a|b;
    int z = a^b;
    int p = ~a;
    int q = ~b;
    std::cout<<x<<y<<z<<p<<q;

    return 0;
}