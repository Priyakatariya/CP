#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1), pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }
        ll total = pref[n];
        while (q--) {
            ll l, r, k;
            cin >> l >> r >> k;
            ll seg = pref[r] - pref[l - 1];
            ll len = r - l + 1;
            ll newTotal = total - seg + len * k;  //  for overflow
            cout << (newTotal % 2 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
