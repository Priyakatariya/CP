#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    
    if (x != 1) {
        cout << "YES\n";
        cout << n << "\n";
        for (int i = 0; i < n; i++) cout << 1 << " ";
        cout << "\n";
    } else {
        if (k == 1) {
            cout << "NO\n";
            return;
        }
        if (n % 2 == 1 && k == 2) {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        if (n % 2 == 0) {
            cout << n / 2 << "\n";
            for (int i = 0; i < n / 2; i++) cout << 2 << " ";
            cout << "\n";
        } else {
            // n is odd, k >= 3
            cout << (n - 3) / 2 + 1 << "\n";
            cout << 3 << " ";
            for (int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
            cout << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
