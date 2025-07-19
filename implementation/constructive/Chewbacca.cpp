#include <iostream>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        int digit = x[i] - '0'; 
        int inverted = 9 - digit; 
        if (inverted < digit && !(i == 0 && inverted == 0)) {
            x[i] = inverted + '0'; }
    }

    cout << x << endl; 
    return 0;
}

