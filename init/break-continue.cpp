#include <iostream>

using namespace std;

int main() {
    int a;
    for (int i = 0; i < 10; i++) {
        a = i;
        if (i == 5) {
            break;
            //stops the loop
        } else {
            continue;
            // jump the current execution
        }
        cout << i << endl;
        // not executed
    }
    cout << a << endl;

    return 0;
}