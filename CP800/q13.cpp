#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    vector<int> b, c;
    int smallest = a[0];
    for (auto x : a) {
        if (x == smallest) {
            b.push_back(x);
        } else {
            c.push_back(x);
        }
    }

    if (b.empty() || c.empty()) {
        cout << -1 << endl;
        return;
    }

    cout << b.size() << " " << c.size() << endl;
    for (auto x : b) cout << x << " ";
    cout << endl;
    for (auto x : c) cout << x << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
