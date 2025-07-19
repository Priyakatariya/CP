#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    string t;
    cin >> t;
    string result = "";
    int i = 0;      
    int step = 1;   
    while (i < n) {
        result += t[i]; 
          i += step;
                  step++;
    }

    cout << result << endl;

    return 0;
}
