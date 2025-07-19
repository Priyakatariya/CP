#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b > d || (a + (d - b)) < c) {
        cout << -1 << '\n';
        return;
    }
    int moves = 2 * (d - b) + (a - c);
    cout << moves << '\n';
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
