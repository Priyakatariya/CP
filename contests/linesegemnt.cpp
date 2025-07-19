#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        long long px, py, qx, qy;
        cin >> px >> py >> qx >> qy;

        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

       
        long double dist = sqrt((px - qx) * (px - qx) + (py - qy) * (py - qy));

        
        if (sum < dist) {
            cout << "No\n";
        } else {
            
            long long sum_int = sum;
            long long dist_int = (long long)round(dist);
            if ((sum_int - (long long)dist) >= 0 && ((sum_int - (long long)(dist)) % 2 == 0)) {
                cout << "Yes\n";
            } else {
                
                if (((long long)(sum - dist)) % 2 == 0) {
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            }
        }
    }
    return 0;
}
