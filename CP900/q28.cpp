#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n * k);
        for (int i = 0; i < n * k; ++i) {
            cin >> a[i];
        }

        long long sum = 0;
        long long m = (n + 1) / 2; // median position in 1-based indexing
        int index = n * k - m;     // start from here (0-based)

        for (int i = 0; i < k; ++i) {
            sum += a[index];
            index -= (n - m + 1); // jump to previous group’s median
        }

        cout << sum << endl;
    }
    return 0;
}
