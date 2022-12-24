#include <iostream>

using namespace std;

int main() {
    int a, b = 0;

    for (int i = 1; i <= 100; i++) {
        a += i * i;
        b += i;
    }
    b *= b;

    cout << b - a << endl;
    return 0;
}