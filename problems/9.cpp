#include <iostream>

using namespace std;

int main() {
    int i, j, n, found;
    n = 100;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // https://en.wikipedia.org/wiki/Pythagorean_triple#Generating_a_triple
            int a = (i * i) - (j * j);
            int b = 2 * i * j;
            int c = (i * i) + (j * j);
            if ((i > j) && (a + b + c) == 1000) {
                cout << a * b * c << endl;
            }
        }
    }
    return 0;
}