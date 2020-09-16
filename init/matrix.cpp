#include <iostream>

using namespace std;

int main() {
    string animals[][3] = {
        {"monkey", "cat", "human"},
        {"bee", "butterfly", "dragonfly"},
        {"bear", "dog", "wolf"}
    };

    for (int i = 0; i < 3; i++) {
        cout << " - " << i + 1 << "° line: -" << endl;
        for (int j = 0; j < 3; j++) {
            cout << "   " << animals[i][j] << endl;
        }
    }

    return 0;
}