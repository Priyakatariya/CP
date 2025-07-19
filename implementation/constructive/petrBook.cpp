#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<int> days(7); 
    for (int i = 0; i < 7; ++i) {
        cin >> days[i];
    }

    int day = 0; 
    while (n > 0) {
        n -= days[day]; 
        day = (day + 1) % 7; 
    }

    // day was incremented one extra time after completing the book
    cout << (day == 0 ? 7 : day) << endl;

    return 0;
}
