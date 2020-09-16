#include <iostream>

using namespace std;

int main() {
    int numberCats = 5;
    int numberDogs = 2;
    float money = 52.25;
    float neededMoney = numberCats * 10.5 + numberDogs * 12;

    cout << "Number of cats: " << numberCats << endl;
    cout << "Number of dogs: " << numberDogs << endl;
    cout << "Required money: $" << neededMoney << endl;
    cout << "" << endl;

    if (neededMoney <= money) {
        cout << "You have enough money!" << endl;
    } else {
        cout << "You DON'T have enough money!" << endl;
    }

    return 0;
}