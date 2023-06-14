#include <iostream>
using namespace std;
int main()
{
    int num, cnt = 0, dgt;
    cin >> num;
    while (num > 0)
    {
        dgt = num % 10;
        cnt++;
        num = num / 10;
    }

    cout <<cnt;
}