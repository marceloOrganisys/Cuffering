#include <iostream>

using namespace std;

int main() {
    int value = 34;
    cout << sizeof(value) << endl; // operator

    int values[] = { 2, 5, 7, 23 };
    cout << sizeof(values) << endl;
    
    int values2[] = { 2, 5, 7, 23, 56, 3 };
    cout << sizeof(values2) << endl;

    // each int = 4 bytes
    cout << "Elements: " << sizeof(values2)/sizeof(int) << endl;
    // number of elements

    return 0;
}