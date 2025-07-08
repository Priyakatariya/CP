#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int x;
        cin >> x; 

        int digit = x % 10; 
        int len = 0;
        int temp = x;

      
        while (temp > 0) {
            len++;
            temp /= 10;
        }

        // Compute total key presses:
        // (digit - 1) * 10 accounts for all digits before this digit
        // len*(len + 1)/2 gives the sum of first len natural numbers
        int presses = (digit - 1) * 10 + len * (len + 1) / 2;

        cout << presses << endl;
    }

    return 0;
}
