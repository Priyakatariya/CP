#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        bool found = false;
        for (int i = 0; i < n - 2; ++i) {
            if (p[i] < p[i + 1] && p[i + 1] > p[i + 2]) {
                cout << "YES" << endl;
                cout << i + 1 << " " << i + 2 << " " << i + 3 << endl; // 1-based index
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
