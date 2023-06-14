
//8008040682
#include<iostream>
using namespace std;


int fact(int n){
    if(n==1){
        return 1;
    }
    int res=2;
    for(int i=2; i<=n; i++){
        res=res*i;
    }
    return res;
}

int nCr(int n, int r){
    return (fact(n)/(fact(r)*fact(n-r)));
}

int main(){
    int n,r;
    cout<<"Enter the value of n->";
    cin>>n;
    cout<<"Enter the value of r->";
    cin>>r;
    cout<<nCr(n,r);
}