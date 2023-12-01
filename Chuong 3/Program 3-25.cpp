#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    unsigned seed = time(0);
    srand(seed);
    for (int i = 0; i < 3; i++) {
        int randomNumber = rand() % 100 + 1; 
        cout << "Random number " << i + 1 << ": " << randomNumber << endl;
    }

    return 0;
}