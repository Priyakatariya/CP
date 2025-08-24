#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a;
        cin >> a; // first element
        for (int i = 1; i < n; ++i) {
            int x;
            cin >> x;
            a &= x; // bitwise AND with next element
        }
        cout << a << endl;
    }
    return 0;
}
