#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n; string s;
        cin >> n >> s;
        int best = 1, run = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1])
                run++;
            else {
                best = max(best, run);
                run = 1;
            }
        }
        best = max(best, run);
        cout << best + 1 << "\n";
    }
    return 0;
}
