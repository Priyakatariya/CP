#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int count2 = 0;
    for (int &x : a) {
        cin >> x;
        if (x == 2) count2++;
    }

    if (count2 % 2 != 0) {
        cout << -1 << '\n';
        return;
    }

    int half = count2 / 2;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 2) cnt++;
        if (cnt == half) {
            cout << i + 1 << '\n';
            return;
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
