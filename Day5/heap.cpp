#include <iostream>

int main() {
    int a[4] = {1, 2, 3, 4}; //stack

    int *ptr;

    ptr = new int[4]; //heap
    ptr[0] = 3;
    
std::cout << ptr[0] << std::endl;
    delete[] ptr; //free memory
}