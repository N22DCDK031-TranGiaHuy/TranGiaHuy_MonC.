#include <iostream>
using namespace std;

int main() {
    char ch;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cin.ignore();

    cout << "Enter a character: ";
    ch = cin.get();

    cout << "Thank You!" << endl;

    return 0;
}