#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum= sum + arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    //variable size Array.../

    int * arr = new int[n];

    //taking input from user../
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int ans = getSum(arr,n);
    cout<<"Sum:"<<ans<<endl;
}