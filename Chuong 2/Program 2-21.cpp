#include <iostream>
using namespace std;

int main() {
    double regularWages, 
        basePayRate = 18.25, 
        regularHours = 40.0, 
        overtimeWages, 
        overtimePayRate = 27.78, 
        overtimeHours = 10, 
        totalWages; 

    regularWages = basePayRate * regularHours;

    overtimeWages = overtimePayRate * overtimeHours;

    totalWages = regularWages + overtimeWages;

    cout << "Luong cho tuan này là $" << totalWages << endl;

    return 0;
}