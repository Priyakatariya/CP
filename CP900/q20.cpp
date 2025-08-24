#include <iostream>
#include <string>
using namespace std;

int countAB(const string& s) {
    int count = 0;
    for (size_t i = 0; i + 1 < s.size(); ++i)
        if (s[i] == 'a' && s[i + 1] == 'b')
            ++count;
    return count;
}

int countBA(const string& s) {
    int count = 0;
    for (size_t i = 0; i + 1 < s.size(); ++i)
        if (s[i] == 'b' && s[i + 1] == 'a')
            ++count;
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int ab = countAB(s);
        int ba = countBA(s);

        if (ab == ba) {
            cout << s << endl;
        } else {
            // Change first character to match the last character
            s[0] = s[s.size() - 1];
            cout << s << endl;
        }
    }
    return 0;
}
