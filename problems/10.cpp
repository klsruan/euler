#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using VINT = vector<uint64_t>;

// https://www.baeldung.com/cs/prime-number-algorithms#sieve-of-sundaram
VINT primeNumber(uint64_t n) {
    uint64_t k, i, j;
    k = (n - 1) / 2;
    VINT A, T;
    for (i = 1; i < k + 1; i++)
        A.push_back(1);
    for (i = 1; i <= sqrt(k); i++) {
        j = i;
        while (i + j + 2 * i * j <= k) {
            A[i + j + 2 * i * j] = 0;
            j++;
        }
    }
    T.push_back(2);
    for (i = 1; i < k + 1; i++) {
        if (A[i])
            T.push_back(2 * i + 1);
    }
    return T;
}

int main() {
    uint64_t i, sum;
    VINT T = primeNumber(2e6);
    for (i = 0, sum = 0; i < T.size(); i++)
        sum += T[i];
    cout << sum << endl;
}