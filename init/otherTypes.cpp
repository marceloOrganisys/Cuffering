#include <iostream>

using namespace std;

int main() {
    bool bVal = true;
    bool bVal2 = false;

    cout << "true: " << bVal << " | false: " << bVal2 << endl;

    int iVal = 1;
    if (iVal) {
        cout << "Int 1 = true" << endl;
    } else {
        cout << "Int 1 != true" << endl;
    }

    char cVal = 55; // some letter/symble in ascii
    cout << cVal << endl;
    char cVal2 = 'b';
    cout << cVal2 << endl;

    return 0;
}