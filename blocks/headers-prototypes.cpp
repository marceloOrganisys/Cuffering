#include <iostream>
#include "utils.h"

using namespace std;

int main() {
    doSomething();
    doSomething();
    cout << sum(2, 4) << endl;
}

// void doesn't return anything
void doSomething() {
    cout << "Hello" << endl;
}

int sum(int a, int b) {
    return a + b;
}
