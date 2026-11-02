#include <iostream>

int main() {

    int a[3] = {3, 4, 5};

    int *p = a;
    p++;
    std::cout << *p << std::endl;
}