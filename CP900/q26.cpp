#include <iostream>
using namespace std;

bool isPowerOfTwo(long long n) {
    // Keep dividing n by 2 if it's even
    while (n % 2 == 0) {
        n /= 2;
    }
    // If after division we get 1, it was a power of 2
    return n == 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (isPowerOfTwo(n)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
