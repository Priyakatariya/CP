#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int count = 0;
    for (int d = 1; d <= n; d *= 10) {
        for (int x = 1; x <= 9; x++) {
            if (d * x <= n) count++;
        }
    }
    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
