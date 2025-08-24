#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        long long sum = 0;
        long long maxBeauty = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
            maxBeauty += (a[i] + x - 1) / x;  // ceil(a[i]/x)
        }

        long long minBeauty = (sum + x - 1) / x;  // ceil(sum/x)

        cout << minBeauty << " " << maxBeauty << endl;
    }

    return 0;
}
