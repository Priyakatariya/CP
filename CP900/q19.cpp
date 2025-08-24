#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x0, n;
        cin >> x0 >> n;
        long long delta;

        if (n % 4 == 0) delta = 0;
        else if (n % 4 == 1) delta = -n;
        else if (n % 4 == 2) delta = 1;
        else delta = n + 1;

        if (x0 % 2 == 0)
            cout << x0 + delta << "\n";
        else
            cout << x0 - delta << "\n";
    }
    return 0;
}
