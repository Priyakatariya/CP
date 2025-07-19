#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int all_xor = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        all_xor ^= a[i];
    }
    if (n % 2 == 1) {
        cout << all_xor << "\n";
    } else {
        if (all_xor == 0) cout << 0 << "\n";
        else cout << -1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
