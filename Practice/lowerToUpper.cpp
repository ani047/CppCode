#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Ch:";
    cin >> ch;
    char Temp = (ch - 'A' + 'a');
    cout << Temp << endl;
}