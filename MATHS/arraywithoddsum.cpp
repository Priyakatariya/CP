#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int oddCount = 0, evenCount = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        if (oddCount > 0 && evenCount > 0) {

            cout << "YES\n";
        } else if (oddCount > 0 && n % 2 == 1) {
         
            cout << "YES\n";
        } else {
            
            cout << "NO\n";
        }
    }
    return 0;
}
