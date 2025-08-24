#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    if (n % 2 != 0) {
        cout << -1 << "\n";
        return;
    }
    
    long long min_buses = (n + 5) / 6;
    long long max_buses = n / 4;
    
    if (min_buses * 6 > n || max_buses * 4 < n) {
        cout << -1 << "\n";
    } else {
        cout << min_buses << " " << max_buses << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
