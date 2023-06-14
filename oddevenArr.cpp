#include <iostream>

using namespace std;

int main()
{
    // Prompt the user to enter a number
    cout << "Enter a number: ";

    // Read the number
    int num;
    cin >> num;

    // Check if the number is even or odd
    if (num & 1) // If the last bit is 1, the number is odd
    {
        cout << num << " is odd" << endl;
    }
    else // Otherwise, the number is even
    {
        cout << num << " is even" << endl;
    }

    return 0;
}
