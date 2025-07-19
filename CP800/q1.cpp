#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());

    if (k == 1) {
        // If k == 1, we can only reverse subarrays of length 1 (i.e., do nothing)
        // So, array must be already sorted
        if (a == b) cout << "YES\n";
        else cout << "NO\n";
    } else {
        // If k >= 2, we can sort the array by reversing small parts as needed
        // In practice, any array can be sorted if k >= 2
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
