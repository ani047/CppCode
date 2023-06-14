#include<iostream>
using namespace std;
int main(){
    int a,b,m;
    cout<<"a:";
    cin>>a;

    cout<<"b:";
    cin>>b;
    cout<<"m:";
    cin>>m;


    /*
        (a+b)%m = a%m + b%m
        
    */

  int mod = a%m + b%m;

  return mod;

  cout<<mod;
  
  }