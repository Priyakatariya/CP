#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "0 0\n";
        } else {
            long long diff = abs(a - b);
            long long rem = a % diff;
            cout << diff << " " << min(rem, diff - rem) << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
