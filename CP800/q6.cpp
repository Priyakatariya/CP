#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<long long, long long> freq;
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        if (freq.size() >= 3) {
            cout << "No" << endl;
        } else {
            long long freq1 = freq.begin()->second;
            long long freq2 = freq.rbegin()->second;
            if (freq1 == freq2) {
                cout << "Yes" << endl;
            } else if (n % 2 == 1 && abs(freq1 - freq2) == 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}

