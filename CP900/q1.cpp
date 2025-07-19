#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> generate(int x, int y, int a, int b) {
    vector<pair<int, int>> moves;
    int dx[] = {a, a, -a, -a, b, b, -b, -b};
    int dy[] = {b, -b, b, -b, a, -a, a, -a};
    for (int i = 0; i < 8; i++) {
        moves.emplace_back(x + dx[i], y + dy[i]);
    }
    return moves;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;
        int ans = 0;
        auto king_moves = generate(xk, yk, a, b);
        for (auto [kx, ky] : king_moves) {
            auto knight_moves = generate(kx, ky, a, b);
            for (auto [nx, ny] : knight_moves) {
                if (nx == xq && ny == yq) {
                    ans++;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
