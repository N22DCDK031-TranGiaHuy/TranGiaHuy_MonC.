#include <iostream>
using namespace std;

int main() {
    double totalSales = 8.6e6;  
    double eastCoastPercentage = 0.58;  

    double eastCoastSales = totalSales * eastCoastPercentage;

    cout << "The East Coast division will generate $" << eastCoastSales << " in sales this year." << endl;

    return 0;
}