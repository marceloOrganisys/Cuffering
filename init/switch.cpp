#include <iostream>

using namespace std;

int main() {
    int value = 5;
    const int CONST = 3;
    switch (value) {
    case CONST:
        cout << CONST << endl; // !var but consts
        break;

    case 4:
        cout << "four" << endl;
        break;

    case 5:
        cout << "five" << endl;
        break;
    
    default:
        cout << "Unrecognized" << endl;
        break;
    }

    return 0;
}