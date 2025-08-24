#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count_of_zero = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) count_of_zero++;
        }

        if (count_of_zero == n) {
            cout << 0 << endl;
            continue;
        }

        bool found_zero = false;
        int left = 0, right = n - 1;

        while (left < n && a[left] == 0) left++;
        while (right >= 0 && a[right] == 0) right--;

        for (int i = left; i <= right; i++) {
            if (a[i] == 0) {
                found_zero = true;
                break;
            }
        }

        if (!found_zero) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;
}
