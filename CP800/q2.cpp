#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int &ai : a) cin >> ai;

    int max_gap = a[0]; // from 0 to first station

    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, a[i] - a[i - 1]); // consecutive stations gap
    }

    // from last station to x, we need to double this gap because no refuel at x
    max_gap = max(max_gap, (x - a.back()) * 2);

    cout << max_gap << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
