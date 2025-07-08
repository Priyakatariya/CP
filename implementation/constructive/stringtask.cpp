#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    string vowels = "aoyeui";
    string result = "";

    for (char c : input) {
       
        c = tolower(c);

        // Check if it's not a vowel
        if (vowels.find(c) == string::npos) {
            result += '.';
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}
