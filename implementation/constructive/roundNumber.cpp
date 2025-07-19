#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> roundNumbers;
        int place = 1; // Represents the current place value (1 for units, 10 for tens, etc.)

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                roundNumbers.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }

        // Output the results
        cout << roundNumbers.size() << endl;
        for (int num : roundNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
