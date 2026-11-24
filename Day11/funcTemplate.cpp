#include <stdio.h>
using namespace std;

template <typename T>

void getMax(T a, T b) {
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is greater than %d\n", b, a);
    }
}

int main() {
    int a = 10, b = 20;
    getMax(a, b);

    double x = 15.5, y = 12.3;
    getMax(x, y);

    return 0;
}