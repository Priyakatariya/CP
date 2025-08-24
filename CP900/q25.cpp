#include <bits/stdc++.h>
using namespace std;

#define int long long

int manhattan(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

void solve() {
    int n, m, i, j;
    cin >> n >> m >> i >> j;

    // 4 corners of the grid
    vector<pair<int, int>> corners = {
        {1, 1}, {1, m}, {n, 1}, {n, m}
    };

    int max_dist = -1;
    pair<int, int> ans1, ans2;

    // Try all pairs of corners
    for (auto a : corners) {
        for (auto b : corners) {
            // Total distance: i,j -> a -> b -> i,j
            int dist = manhattan(i, j, a.first, a.second)
                     + manhattan(a.first, a.second, b.first, b.second)
                     + manhattan(b.first, b.second, i, j);
            if (dist > max_dist) {
                max_dist = dist;
                ans1 = a;
                ans2 = b;
            }
        }
    }

    cout << ans1.first << " " << ans1.second << " "
         << ans2.first << " " << ans2.second << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
