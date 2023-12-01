#include <iostream>
using namespace std;

int main() {
    int begInv, sold, store1, store2, store3;
    cout << "M?t tu?n tr??c, 3 c?a hàng widget m?i m?\n";
    cout << "cùng lúc v?i cùng t?n ??u k?. T?n ??u k? là gì? ";
    cin >> begInv;
    store1 = store2 = store3 = begInv;
    cout << "C?a hàng 1 ?ã bán bao nhiêu widget? ";
    cin >> sold;
    store1 -= sold; 
    cout << "C?a hàng 2 ?ã bán bao nhiêu widget? ";
    cin >> sold;
    store2 -= sold; 
    cout << "C?a hàng 3 ?ã bán bao nhiêu widget? ";
    cin >> sold;
    store3 -= sold; 
    cout << "\nT?n kho hi?n t?i c?a m?i c?a hàng:\n";
    cout << "C?a hàng 1: " << store1 << endl;
    cout << "C?a hàng 2: " << store2 << endl;
    cout << "C?a hàng 3: " << store3 << endl;

    return 0;
}