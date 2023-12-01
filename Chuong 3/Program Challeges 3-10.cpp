#include <iostream>
using namespace std;

int main() {
    double replacement_cost;
    cout << "Nhập giá thành thay thế của toà nhà: ";
    cin >> replacement_cost;
    double minimum_insurance = 0.8 * replacement_cost;
    cout << "Bạn nên mua ít nhất $" << minimum_insurance << " trong bảo hiểm." << endl;

    return 0;
}