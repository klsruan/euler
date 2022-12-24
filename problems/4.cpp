#include <iostream>

using namespace std;

int reverseNumber(int n) {
    int r = 0;
    while (n > 0) {
        r = (r * 10) + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    int major = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int k = i * j;
            int r = reverseNumber(i * j);
            if (r == k) {
                if (k > major) {
                    major = k;
                }
            }
        }
    }
    cout << major << endl;
    return 0;
}