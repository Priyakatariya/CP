#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int max_blank = 0;
    int current_blank = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            current_blank++;
            max_blank = max(max_blank, current_blank);
        } else {
            current_blank = 0;
        }
    }
    cout << max_blank << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
