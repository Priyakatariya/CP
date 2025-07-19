#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int smallest = 9;
        for (char c : x) {
            smallest = min(smallest, c - '0');
        }
        cout << smallest << endl;
    }
    return 0;
}
