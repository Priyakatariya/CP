#include <iostream>
using namespace std;

int main() {
    int n, a[100], maxH = -1, minH = 101, maxIdx = 0, minIdx = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > maxH) {
            maxH = a[i];
            maxIdx = i;
        }
        if (a[i] <= minH) {
            minH = a[i];
            minIdx = i;
        }
    }
    int swaps = maxIdx + (n - 1 - minIdx);
    if (maxIdx > minIdx)
        swaps--;
    cout << swaps << endl;
    return 0;
}
