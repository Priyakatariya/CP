#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        if (2 * l <= r) {
            cout << l << " " << 2 * l << "\n";
        } else {
            cout << "-1 -1\n";
        }
    }
    return 0;
}
