#include <iostream>
#include <climits>

using namespace std;

int main() {
    int value = 5777;
    cout << value << endl;

    cout << "   Max int " << INT_MAX << endl;
    cout << "   Min int " << INT_MIN << endl;

    long int lValue = 89787289739847;
    cout << lValue << endl;

    short int sValue = 1243;
    cout << sValue << endl;
    cout << "   Short int max " << SHRT_MAX << endl;
    cout << "   Short int min " << SHRT_MIN << endl;
    cout << "   Long int max " << LONG_MAX << endl;
    cout << "   Long int min " << LONG_MIN << endl;
    cout << "Size of int: " << sizeof(int) << endl;

    unsigned int uValue = 9732984;
    cout << "Size of unsigned int " << sizeof(unsigned int) << endl;

    return 0;
}