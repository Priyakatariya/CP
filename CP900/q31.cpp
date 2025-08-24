#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        int count2 = 0, count3 = 0;

        while (n % 2 == 0) {
            n /= 2;
            count2++;
        }

        while (n % 3 == 0) {
            n /= 3;
            count3++;
        }

        if (n != 1 || count2 > count3) {
            cout << -1 << endl;
        } else {
            // Multiply by 2 (count3 - count2) times, then divide by 6 (count3) times
            cout << (count3 - count2) + count3 << endl;
        }
    }
    return 0;
}
