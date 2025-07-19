#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        int i = 0;
        while (i <= n - k) {
            bool can_hike = true;
            for (int j = 0; j < k; j++) {
                if (a[i + j] == 1) {
                    can_hike = false;
                    break;
                }
            }
            if (can_hike) {
                ans++;
                i += k + 1; // skip k days of hike + 1 day break
            } else {
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
