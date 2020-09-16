#include <iostream>

using namespace std;

int main() {
    string cars[][2] = {
        {"Ferrari", "Gol"},
        {"Hilux", "MBW"},
        {"Verona", "Chevette"}
    };

    int totalS = sizeof(cars);
    int colSize = sizeof(cars[0]);
    int columns = totalS / colSize;
    int rows = colSize / sizeof(string);
    cout << "Columns: " << columns << endl;
    cout << "Rows: " << rows << endl;

    cout << "Matrix size: " << columns << " x " << rows << endl;
}
