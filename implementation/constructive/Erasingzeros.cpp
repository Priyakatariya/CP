#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        string s;
        cin >> s;

        int first = -1, last = -1;

        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (first == -1)
                    first = i; 
                last = i;      // Always update last
            }
        }

        int zerosToErase = 0;

        
        if (first != -1) { 
            for (int i = first; i <= last; i++) {
                if (s[i] == '0')
                    zerosToErase++;
            }
        }

        cout << zerosToErase << endl;
    }

    return 0;
}
