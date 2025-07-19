#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    long long anna_moves = a + (c + 1) / 2;
    long long katie_moves = b + c / 2;
    
    if (anna_moves > katie_moves) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


// if(c%2==1){
//     if(b>a)
//         cout << "second" << endl;
//     else
//         cout << "first" << endl;
// }
// else{
//     if(b<a)
//         cout << "first" << endl;
//     else
//         cout << "second" << endl;
// }