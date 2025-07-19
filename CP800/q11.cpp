#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ops = LLONG_MAX; // Use LLONG_MAX for long long
    for (int i = 0; i < n; i++) {
        ops = min(ops, abs(a[i]));
    }

    cout << ops << endl;
    return 0;
}
