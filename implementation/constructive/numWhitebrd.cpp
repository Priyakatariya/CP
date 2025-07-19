#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << 2 << '\n';  // The final number is always 2 for n >= 2

        int a = n, b = n - 1;
        for (int i = n - 1; i > 1; --i) {
            cout << a << " " << b << '\n';
            a = (a + b + 1) / 2;  // ceil((a + b)/2)
            b = i - 1;
        }
        cout << a << " " << b << '\n';
    }

    return 0;
}
