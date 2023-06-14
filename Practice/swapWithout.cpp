#include<iostream>
using namespace std;
int main(){
/*
a=6
b=10

b=b*a ...60
a=b/a ...10
b=b/a ...6

*/

int a,b;
cin>>a>>b;


cout<<"Before"<<endl<<a<<endl<<b<<endl;
b=b*a;

a=b/a;

b=b/a;

cout<<"After"<<endl<<a<<endl<<b<<endl;

}