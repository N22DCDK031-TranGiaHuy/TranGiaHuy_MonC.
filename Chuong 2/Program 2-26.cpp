#include <iostream>
using namespace std;

int main() {
    double payRate; 
    double hours; 
    int employeeNumber;

    cout << "Enter the employee number: ";
    cin >> employeeNumber;

    cout << "Enter the hourly pay rate: $";
    cin >> payRate;

    cout << "Enter the number of hours worked: ";
    cin >> hours;

    double grossPay = payRate * hours;

    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hourly Pay Rate: $" << payRate << endl;
    cout << "Hours Worked: " << hours << " hours" << endl;
    cout << "Gross Pay: $" << grossPay << endl;

    return 0;
}