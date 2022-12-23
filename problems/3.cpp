#include <iostream>
#include <cmath>

using namespace std;

void getPrimeFactor(long long n) {
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            n /= i;
        } else {
            i += 1;
        }
    }
    cout << i << endl;
}

int main() {
    getPrimeFactor(600851475143);
    return 0;
}