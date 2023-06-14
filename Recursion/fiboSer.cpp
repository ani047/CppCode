#include<iostream>
using namespace std;
int fibo(int n){
    
    //base case.../
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    // processing../
    cout<<n<<endl;
    
    //recursive relation.../
    return fibo(n-1)+fibo(n-2);

    
}
int main(){
    int num;
    cout<<"num:";
    cin>>num;
    cout<<fibo(num);
}