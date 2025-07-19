#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int neg = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == -1) neg++;
    }
    
    int ans = 0;
    int sum = n - 2 * neg;
    while (sum < 0) {
        sum += 2;
        neg--;
        ans++;
    }
    
    if (neg % 2 != 0) {
        ans++;
    }
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
