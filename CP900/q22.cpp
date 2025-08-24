#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt0 = 0, cnt1 = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 0) cnt0++;
            if (a[i] == 1) cnt1++;
        }

        // If no 1s, we can't remove one to get sum-1
        if (cnt1 == 0) {
            cout << 0 << '\n';
        } else {
            // Total valid subsequences = cnt1 * 2^cnt0
            cout << cnt1 * (1LL << cnt0) << '\n'; // 1LL ensures 64-bit shift
        }
    }

    return 0;
}
