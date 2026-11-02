#include <iostream>

int main(){
    int A[6] = {1, 2, 3, 4, 5, 6};

    for(int x:A){
        std::cout<<x<<"\n";
    }
    return 0;
}