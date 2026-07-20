
#include <iostream>
int main() {
    enum Days {Yesterday=4, Today, Tommorow};
    Days d = Yesterday;
    std::cout<<d;

    return 0;
    
}