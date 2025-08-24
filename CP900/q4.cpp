#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b,n;
        cin >> a >> b>>n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long time = b;
        for (int i = 0; i < n; i++)
            time += min(arr[i], a - 1);
        cout << time << endl;
    }
    return 0;
}