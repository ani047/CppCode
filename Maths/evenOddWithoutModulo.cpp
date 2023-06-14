#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if((num/2)*2==num){
        cout<<"Even";

    }
    else{
        cout<<"Odd";
    }
}
/*
 num & 1 --> Even...
 else{
    odd...
 }
*/