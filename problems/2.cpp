#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    long long sum;

    a = 1;
    b = 2;
    sum = 2;

    for (;;) {
        c = a + b;
        if (c > 4000000)
            break;
        else if (c % 2 == 0) {
            sum += c;
        }
        a = b;
        b = c;
    }

    cout << sum << endl;
    return 0;
}