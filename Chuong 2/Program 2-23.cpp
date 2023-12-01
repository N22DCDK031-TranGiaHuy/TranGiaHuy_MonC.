#include <iostream>
using namespace std;

int main() {
    double regularPrice = 59.95, discount, salePrice;

    discount = regularPrice * 0.2;

    salePrice = regularPrice - discount;
    cout << "Regular price: $" << regularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "Sale price: $" << salePrice << endl;

    return 0;
}