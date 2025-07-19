#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            //For even-numbered rows (0, 2, 4...), print a full row of snake (#). This forms the horizontal part of the snake.
            for (int j = 0; j < m; ++j)
                cout << "#";
        } else if (i % 4 == 1) {
            // For rows where i % 4 == 1 (i.e., row 1, 5, 9...), place a # at the end (right side) of the row, simulating the snake's right turn.
            for (int j = 0; j < m - 1; ++j)
                cout << ".";
            cout << "#";
        } else {
            // For rows where i % 4 == 3 (i.e., row 3, 7, 11...), place a # at the start (left side) of the row, simulating the snake's left turn.
            cout << "#";
            for (int j = 1; j < m; ++j)
                cout << ".";
        }
        cout << endl;
    }

    return 0;
}
//##### row=0%2==0
// ....#i%4==1
// ##### even
// #.... 
// #####
