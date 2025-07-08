#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    j--;

    vector<int> a(n);
    int max_strength = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > max_strength) {
            max_strength = a[i];
        }
    }

    if (a[j] == max_strength) {
        cout << "YES\n";
    } else {
        if (k == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}

int main() {
  

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
