#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    bool hasZero = false, allZero = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != 0) allZero = false;
        if (a[i] == 0) hasZero = true;
    }

    if (allZero) cout << 0 << "\n";
    else if (hasZero) cout << 2 << "\n";
    else cout << 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
