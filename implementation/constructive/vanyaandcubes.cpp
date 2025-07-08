#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;        
    int totalCubes = 0;    

    for (int level = 1; ; level++) {
        int needed = level * (level + 1) / 2;  // Cubes needed for this level

        if (totalCubes + needed > n)
            break;

        totalCubes += needed;
        height++;
    }

    cout << height << endl;
    return 0;
}
