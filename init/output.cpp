#include <iostream>

using namespace std;

int main() {
    cout << "Starting program" << flush;
    // doesn't break line

    cout << "First output text!" << endl;
    // endl flushes the output
    // and output all the text that
    // it is supposed to output

    cout << "banana. "
         << "apple. "
         << "orange " << endl;

    cout << "Second line" << endl;
    // endl -> end line and carriege return

    return 0;
}
