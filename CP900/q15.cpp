#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            j++;
        }
        i++;
    }

    cout << (j == t.size() ? "YES" : "NO") << "\n";
}

int main() {
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
