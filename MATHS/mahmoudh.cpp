#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // If n is even, Mahmoud wins
    if (n % 2 == 0)
        cout << "Mahmoud\n";
    else
        cout << "Ehab\n";

    return 0;
}
