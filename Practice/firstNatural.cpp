#include <iostream>
using namespace std;
int printNatural(int n, int tableNum)
{
    // base case...
    if (n == 0)
    {
        return 0;
    }
   
    // recursive relation...
    printNatural(n - 1, tableNum);

    // process
    cout<<n<<endl;
    // cout << n << " * " << tableNum <<" = " << n*tableNum << endl;
}
int main()
{
    int num, tableNum;
    cout << "Num:";
    cin >> num;
    cout << "tableNum";
    cin >> tableNum;
    printNatural(num, tableNum);
}