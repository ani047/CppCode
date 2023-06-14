#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    int *ptr = &num;

    

    cout<<num<<endl;
    cout<<"first:"<<ptr<<endl;
    ptr = ptr + 1;
    cout<<"second"<<ptr<<endl;

    cout<<*ptr<<endl;



}