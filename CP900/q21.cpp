#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int minMovesToMakeDivisibleBy25(const string &s) {
    int n = s.size();
    int ans = INT_MAX;

    // Try all valid suffixes
    string targets[] = {"00", "25", "50", "75"};

    for (string target : targets) {
        char last = target[1];
        char secondLast = target[0];
        int pos2 = -1, pos1 = -1;

        // Find position for last digit of target
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == last) {
                pos2 = i;

                // Now find position for second last digit before pos2
                for (int j = pos2 - 1; j >= 0; --j) {
                    if (s[j] == secondLast) {
                        pos1 = j;
                        // Remove everything between pos1 and end except those two
                        int removed = (n - pos2 - 1) + (pos2 - pos1 - 1);
                        ans = min(ans, removed);
                        break; // no need to check more
                    }
                }

                pos1 = -1; // reset for next search
            }
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string num;
        cin >> num;
        cout << minMovesToMakeDivisibleBy25(num) << endl;
    }
    return 0;
}
