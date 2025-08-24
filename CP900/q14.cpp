#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n < 4 || n % 2 != 0) {
            cout << -1 << "\n";
        } else {
            // Minimum number of buses if we maximize 6-seater buses
            long long min_buses = (n + 5) / 6;
            // Maximum number of buses if we use all 4-seater buses
            long long max_buses = n / 4;

            cout << min_buses << " " << max_buses << '\n';
        }
    }

    return 0;
}
