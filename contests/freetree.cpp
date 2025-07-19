#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    int u, v, c;
};

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> col(n + 1);
    for (int i = 1; i <= n; i++) cin >> col[i];

    vector<Edge> edg;
    long long sum = 0;
    for (int i = 1; i < n; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        edg.push_back({u, v, c});
        if (col[u] != col[v]) sum += c;
    }

    while (q--) {
        int v, x;
        cin >> v >> x;
        for (auto& e : edg) {
            int u = e.u, w = e.v, c = e.c;
            if (u == v || w == v) {
                int other = (u == v ? w : u);
                if (col[other] != col[v]) sum -= c;
                if (col[other] != x) sum += c;
            }
        }
        col[v] = x;
        cout << sum << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
