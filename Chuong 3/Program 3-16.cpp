#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double day1, day2, day3, total;
    cout << "Nh?p doanh s? bán hàng cho ngày 1: ";
    cin >> day1;
    cout << "Nh?p doanh s? bán hàng cho ngày 2: ";
    cin >> day2;
    cout << "Nh?p doanh s? bán hàng cho ngày 3: ";
    cin >> day3;
    total = day1 + day2 + day3;
    cout << "\nDoanh s? bán hàng\n";
    cout << "------------------\n";
    cout << setprecision(2) << fixed; 
    cout << "Ngày 1: " << setw(8) << day1 << endl;
    cout << "Ngày 2: " << setw(8) << day2 << endl;
    cout << "Ngày 3: " << setw(8) << day3 << endl;
    cout << "T?ng: " << setw(8) << total << endl;

    return 0;
}