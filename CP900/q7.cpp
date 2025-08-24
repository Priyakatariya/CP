#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        int max_len = 1, current = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] <= k) {
                ++current;
            } else {
                max_len = max(max_len, current);
                current = 1;
            }
        }
        max_len = max(max_len, current);
        cout << (n - max_len) << "\n";
    }
    return 0;
}
