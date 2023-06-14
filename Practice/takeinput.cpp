/*


#include<iostream>
using namespace std;
int main(){
    int num,dgt;
    int arr[10], i=0;
    string str[100]= {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"Num:";
    cin>>num;
    while(num>0){
        dgt=num%10;
        cout<<str[dgt-1];
        num=num/10;
    }

}

*/

#include <iostream>
using namespace std;
int printNum(int n, int rem)
{
    // base case...
    if (n < 0)
    {
        return 0;
    }
    // process...
    rem = n % 10;
    n = n / 10;
    cout << rem << endl;
    // recursive relation...
    printNum(n, rem);
    // process...
}
int main()
{
    int num, rem = 0;
    cout << "Num:";
    cin >> num;
    printNum(num, rem);
}