#include <iostream>

using namespace std;

int main() {
    string password = "hello";
    cout << "Enter you password: " << flush;

    string input;
    cin >> input;

    if (input == password) {
        cout << "Loged in..." << endl;
    } else {
        cout << "Wrong password" << endl;
    }

    return 0;
}