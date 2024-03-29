#include <iostream>
using namespace std;

int main()
{
    const int NUM_LETTERS = 10;
    char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E',
                                  'F', 'G', 'H', 'I', 'J'};

    cout << "Ký tự" << "\t" << "Mã ASCII\n";
    cout << "---------" << "\t" << "----------\n";

    for (int count = 0; count < NUM_LETTERS; count++)
    {
        cout << letters[count] << "\t\t";
        cout << static_cast<int>(letters[count]) << endl;
    }

    return 0;
}