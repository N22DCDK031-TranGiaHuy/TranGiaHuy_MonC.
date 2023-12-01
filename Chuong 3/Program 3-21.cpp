#include <iostream>
using namespace std;

int main()
{
    int numberOfPauses = 3; 
    char ch;

    for (int i = 0; i < numberOfPauses; i++) {
        cout << "This program has paused. Press Enter to continue.";
        cin.get(ch);
    }

    cout << "Thank you!";
    return 0;
}