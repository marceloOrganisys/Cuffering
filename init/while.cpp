#include <iostream>

using namespace std;

int main() {
    int counter = 0;
    int repetitions;
    cout << "How many repetitions? " << flush;
    cin >> repetitions;

    if (repetitions > 10) {
        cout << "Fuck you that's too many" << endl;
        cout << "Doing it to 5..." << endl;
        repetitions = 5;
    }

    while (counter <= repetitions) {
        cout << counter << endl;
        counter++;
    }
    
    return 0;
}