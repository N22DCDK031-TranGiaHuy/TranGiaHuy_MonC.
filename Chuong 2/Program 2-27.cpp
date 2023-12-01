#include <iostream>
using namespace std;

int main() {
    double payRate;  
    double hours;    
    int employNumber; 
    cout << "Enter employee number: ";
    cin >> employNumber;
    cout << "Enter hourly pay rate: $";
    cin >> payRate;

    cout << "Enter hours worked: ";
    cin >> hours;

    double totalPay = payRate * hours;

    cout << "Employee #" << employNumber << " earned: $" << totalPay << endl;

    return 0;
}