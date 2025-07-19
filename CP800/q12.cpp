#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &x : b) cin >> x;

    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < n; i++) {
        if (b[i] < b[i - 1]) {
            a.push_back(b[i]);
            a.push_back(b[i]);
        } else {
            a.push_back(b[i]);
        }
    }

    cout << a.size() << '\n';
    for (auto x : a) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
