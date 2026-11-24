#include <iostream>
using namespace std;

template <typename T>
void getMax(T a, T b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else {
        cout << b << " is greater than " << a << endl;
    }
}

int main() {
    int a = 10, b = 20;
    getMax(a, b);

    double x = 15.5, y = 12.3;
    getMax(x, y);

    return 0;
}