#include <iostream>
using namespace std;

int main() {
    double test1, test2, test3; 
    double average; 
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
    cout << "Enter the third test score: ";
    cin >> test3;

    average = (test1 + test2 + test3) / 3.0;

    cout << "The average score is: " << average << endl;

    return 0;
}