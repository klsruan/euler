#include <iostream>
#include <cmath>

using namespace std;
using UINT = unsigned int;

// https://en.wikipedia.org/wiki/Triangular_number#Formula
UINT triangularNumbers(UINT n) {
    return n * (n + 1) / 2;
}

UINT getDivisorsN(UINT n) {
    UINT s = 1;
    UINT d = sqrt(n);
    for (int i = 1; i <= d; i++) {
        if (n % i == 0)
            s += 2;
    }
    if (d * d == n)
        s++;
    return s;
}

int main() {
    UINT i, n, t;
    i = 1;
    n = 0;
    do {
        t = triangularNumbers(i);
        n = getDivisorsN(t);
        i++;
    } while (n < 500);
    cout << t << endl;
    return 0;
}