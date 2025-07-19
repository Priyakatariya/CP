#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> pmin(n);
    pmin[0] = a[0];
    for (int i = 1; i < n; ++i) {
        pmin[i] = min(pmin[i - 1], a[i]);
    }

    vector<int> smax(n);
    smax[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        smax[i] = max(smax[i + 1], a[i]);
    }

    string ans(n, '0');

    for (int i = 0; i < n; ++i) {
        if (i == 0 || i == n - 1) {
            ans[i] = '1';
        } else {
            if ((a[i] < pmin[i - 1] && a[i] < smax[i + 1]) ||
                (a[i] > pmin[i - 1] && a[i] > smax[i + 1])) {
                ans[i] = '1';
            }
        }
    }

    cout << ans << "\n";
}

int main() {
   

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
