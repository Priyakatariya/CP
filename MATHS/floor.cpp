#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;

        if(n <= 2) {
            cout << 1 << "\n";
        } else {
            // calculate floor number for n > 2
            int floor = 2 + (n - 3) / x;
            cout << floor << "\n";
        }
    }
    return 0;
}
