#include <iostream>
using namespace std;
int printDigit(int n, int rem)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    // process
    rem = n % 10;
    cout << rem << endl;
    n = n / 10;
    // recursive relation
    printDigit(n, rem);
}
int main()
{
    int num, rem = 0;
    cout << "num:";
    cin >> num;
    printDigit(num, rem);
}