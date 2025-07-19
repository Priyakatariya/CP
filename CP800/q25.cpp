#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int l = 0, r = n - 1;
    while (l < r && s[l] != s[r]) {
        l++;
        r--;
    }
    cout << r - l + 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
