#include<iostream>
using namespace std;
int fibo(int a,int b, int num){
    int sum=2;
    cout<<a<<"  "<<b;
    //base case...
    if(num==sum)
        return 1;
    //processing...
    sum++;
    int temp;
    temp=a+b;
    a=b;
    b=temp;

    //recursive relation...
    fibo(a,b,num);
}
int main(){
    int num;
    int a=0,b=1;
    cin>>num;
    fibo(a,b,num);
}