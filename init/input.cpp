#include <iostream>

using namespace std;

int main() {
    cout << "Your name: " << flush;
    string username;
    cin >> username;
    // extraction operator

    cout << "How much money do you make in a month? " << flush;
    string salary;
    cin >> salary;

    cout << "" << endl;
    cout << "You are " << username  << " and you make $" << salary << " every month" << endl;

    return 0;
}
