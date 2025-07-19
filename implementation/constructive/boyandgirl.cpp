#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
     string username;
     cin >> username;
    set<char> unique_chars(username.begin(), username.end());
    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
       cout << "IGNORE HIM!\n";
    }
    return 0;
}
