#include <iostream>

using namespace std;

int main() {
    cout << "Array of integers: " << endl;
    cout << "===================" << endl;
    int values[3]; // array of three elements
    values[0] = 88;
    // values[1] = 297;
    values[2] = 1;

    for (int i = 0; i < 3; i++) {
        cout << values[i] << endl; // garbage value at 1
    }
    cout << " " << endl;

    cout << "Array of doubles: " << endl;
    cout << "==================" << endl;

    double numbers[2] = { 4.5, 2.3 }; // already setting

    for (int i = 0; i < 2; i++) {
        cout << numbers[i] << endl;
    }
    cout << " " << endl;

    cout << "Array of zeros: " << endl;
    cout << "================" << endl;
    int zArr[8] = {};

    for (int i = 0; i < 8; i++) {
        cout << zArr[i] << endl;
    }
    cout << " " << endl;

    cout << "Array of strings: " << endl;
    cout << "================" << endl;
    string texts[] = { "Apples", "banana" };
    // size not needed as the elements are being set

    for (int i = 0; i < 2; i++) {
        cout << texts[i] << endl;
    }

    return 0;
}