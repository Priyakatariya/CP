#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    if (n % 2 == 0 || (n >= k && (n - k) % 2 == 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
