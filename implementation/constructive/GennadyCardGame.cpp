#include <iostream>
#include <string>
using namespace std;

int main() {
    string table_card;
   cin >> table_card;

   string hand_card;
    bool can_play = false;

    for (int i = 0; i < 5; ++i) {
       cin >> hand_card;
        if (hand_card[0] == table_card[0] || hand_card[1] == table_card[1]) {
            can_play = true;
        }
    }

    if (can_play) {
       cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
