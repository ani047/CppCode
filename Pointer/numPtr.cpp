#include<iostream>
using namespace std;
int main(){

    /*
    int a;
    cin>>a;
    int *p = &a;

    cout<<a<<endl;
    cout<<(*p)+1<<endl;
    p=p+1;
    cout<<p<<endl;
*/

    //copy pointer ...

    int a;
    //cin>>a;
    int *p = &a;  


    int *q = p;

    cout<<p<<endl;
    cout<<q<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;


    //pointer aurthmatic...

    int i=3;
    int * t = &i;
    cout<<endl<<endl<<i<<endl;
    *t +=1;
    cout<<*t;

    cout<<t<<endl;
    t++;
    cout<<t<<endl;



   

}