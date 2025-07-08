#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  

    vector<int> p(n);  // jinko ko gift dena h
    vector<int> givers(n);  // who gave gift to friend (i+1)

    
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    for (int i = 0; i < n; ++i) {
        int receiver = p[i];      // friend who received gift from friend (i+1)
        givers[receiver - 1] = i + 1;  // friend (i+1) gave to friend (receiver)
    }

    // i = 0: receiver = 2 → givers[1] = 1

// i = 1: receiver = 3 → givers[2] = 2

// i = 2: receiver = 4 → givers[3] = 3

// i = 3: receiver = 5 → givers[4] = 4

// i = 4: receiver = 1 → givers[0] = 5
    for (int i = 0; i < n; ++i) {
        cout << givers[i] << " ";
    }

    return 0;
}
