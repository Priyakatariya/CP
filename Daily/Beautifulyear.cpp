#include <bits/stdc++.h>
using namespace std;

bool distinct(int year) {
    string s = to_string(year);
    sort(s.begin(), s.end());
    return unique(s.begin(), s.end()) == s.end();
}

int main() {
    int y;
    cin >> y;
    int z = y + 1;
    while (!distinct(z)) z++;
    cout << z << "\n";
    return 0;
}
