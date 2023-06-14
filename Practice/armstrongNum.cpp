#include <iostream>
using namespace std;

int main()
{
    int num, rem, sum = 0;
    cout << "num:";
    cin >> num;
    int i = num;
    while (num > 0)
    {
        rem = num % 10;
        sum += (rem * rem * rem);
        num = num / 10;
    }
    if (i == sum)
        cout << "Arms...";
    else
        cout << "Its not!";
}