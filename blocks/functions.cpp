#include <iostream>
#include <typeinfo>

using namespace std;

void showMenu() {
    cout << "1. Search" << endl;
    cout << "2. View record" << endl;
    cout << "3. Quit" << endl;
    cout << "Option: " << flush;
}

string option() {
    int op;
    cin >> op;
    string response = "You chose ";

    switch (op) {
        case 1:
            response += "SEARCH";
            break;
        case 2:
            response += "RECORD";
            break;
        case 3:
            response += "QUIT";
            break;
        
        default:
            response = "Not a valida option";
            break;
    }
    return response;
}

int main() {
    showMenu();
    string resp = option();
    cout << "\n" << resp << endl;

    return 0;
}