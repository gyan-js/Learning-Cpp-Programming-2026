#include <iostream>

int main() {
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    while(num > 0) {
        int digit = num % 10;
        num /= 10;
        std::cout<<digit<<"\n";
    }

    return 0;
    
}