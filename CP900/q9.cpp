#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n;q1
        cin >> n;
        vector<int> p(n+1);
        for (int i = 1; i <= n; ++i)
            cin >> p[i];
        ll g = 0;
        for (int i = 1; i <= n; ++i) {
            if (p[i] != i) {
                ll d = abs(i - p[i]);
                g = gcd(g, d);
            }
        }
        cout << g << "\n";
    }
    return 0;
}
