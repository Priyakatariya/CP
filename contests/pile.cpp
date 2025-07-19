#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
    long long excess_zeros = 0, excess_ones = 0;

    for (int i = 0; i < n; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        excess_zeros += a - c;
        excess_ones += b - d;
    }

    cout << abs(excess_zeros) + abs(excess_ones) << '\n';
    }

    return 0;
}
