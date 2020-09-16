#include <iostream>
#include <iomanip>
// input output

using namespace std;

int main() {
    float val = .067;
    cout << "Our float " << fixed << val << endl;
    cout << "Our float " << scientific << val << endl;
    cout << "Our float " << setprecision(20) << val << endl;

    double dVal = 4.552;
    cout << setprecision(20) << fixed << dVal << endl;

    long double ldVal = 131.187263781672;
    cout << setprecision(20) << fixed << ldVal << endl;

    return 0;
}