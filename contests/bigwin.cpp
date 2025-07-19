#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_med(const vector<int>& freq, int len) {
    if (len == 0) return 0;
    int pos = (len + 2) / 2;
    int cnt = 0;
    for (int i = 1; i <= 100; i++) {
        cnt += freq[i];
        if (cnt >= pos) return i;
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;

    for (int x = 1; x <= 100; x++) {
        vector<int> freq(101, 0);
        int cnt_x = 0, len = 0, l = 0;

        for (int r = 0; r < n; r++) {
            if (a[r] < x) {
                fill(freq.begin(), freq.end(), 0);
                cnt_x = 0;
                len = 0;
                l = r + 1;
                continue;
            }
            freq[a[r]]++;
            len++;
            if (a[r] == x) cnt_x++;

            if (cnt_x > 0) {
                int med = get_med(freq, len);
                ans = max(ans, med - x);
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
