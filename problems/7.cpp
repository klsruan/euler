#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using VINT = vector<int>;

// https://www.baeldung.com/cs/prime-number-algorithms#sieve-of-eratosthenes
// Sieve of Eratosthenes
VINT primeNumber(int n) {
    VINT A, B;
    for (int i = 1; i < n; i++) {
        A.push_back(1);
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (A[i]) {
            int j = i * i;
            while (j <= n) {
                A[j] = 0;
                j += i;
            }
        }
    }
    for (int i = 1; i < n; i++) {
        if (A[i])
            B.push_back(i);
    }
    return B;
}

int main() {
    VINT B = primeNumber(1000000);
    cout << B[10001] << endl;
    return 0;
}