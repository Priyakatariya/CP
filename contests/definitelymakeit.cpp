#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        long long start_height = h[k - 1];
        long long max_height = *max_element(h.begin(), h.end());
        bool can_reach = false;
        for (int i = 0; i < n; i++) {
            if (h[i] == max_height) {
                long long time_needed = abs(start_height - h[i]);
                if (start_height > 1 + time_needed) {
                    can_reach = true;
                    break;
                }
            }
        }
        cout << (can_reach ? "YES" : "NO") << endl;
    }
    return 0;
}
