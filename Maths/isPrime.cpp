#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return 0;
    }

    for(int i=2;  i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cout<<"Enter num";
    cin>>num;
    if(isPrime(num)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not Prime Number!";
    }
}